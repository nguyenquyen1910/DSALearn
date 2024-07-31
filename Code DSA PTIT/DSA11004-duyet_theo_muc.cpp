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
    if(c=='L'){
        root->left=new node(v);
    }
    else root->right=new node(v);
}
void insertNode(node *root,int u,int v,char c){
    if(root==NULL) return;
    if(root->data==u){
        makeRoot(root,u,v,c);
    }
    else{
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}
void levelorder(node *root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();q.pop();
        cout << temp->data << " ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
}
void testCase(){
    node *root=NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int u,v;cin>>u>>v;
        char c;cin>>c;
        if(root==NULL){
            root=new node(u);
            makeRoot(root,u,v,c);
        }
        else insertNode(root,u,v,c);
    }
    levelorder(root);
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