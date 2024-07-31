#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
void makeRoot(node *root,int u,int v,char c){
    if(c=='L') root->left=new node(v);
    else root->right=new node(v);
}
void insertNode(node *root,int u,int v,char c){
    if(root==NULL) return;
    else{
        if(root->data==u){
            makeRoot(root,u,v,c);
        }
        else{
            insertNode(root->left,u,v,c);
            insertNode(root->right,u,v,c);
        }
    }
}
bool checkEqual(node *root1,node *root2){
    if(root1==NULL && root2==NULL) return true;
    if(root1!=NULL && root2!=NULL && root1->data==root2->data){
        return (checkEqual(root1->left,root2->left) && checkEqual(root2->right,root2->right));
    }
    return false;
}
void testCase(){
    node *root1=NULL;
    node *root2=NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int u,v;char c;cin>>u>>v>>c;
        if(root1==NULL){
            root1=new node(u);
            makeRoot(root1,u,v,c);
        }
        else{
            insertNode(root1,u,v,c);
        }
    }
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int u,v;char c;cin>>u>>v>>c;
        if(root2==NULL){
            root2=new node(u);
            makeRoot(root2,u,v,c);
        }
        else{
            insertNode(root2,u,v,c);
        }
    }
    cout << checkEqual(root1,root2);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}