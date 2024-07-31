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
bool checkFull(node *root){
    if(root==NULL) return true;
    if(root->left==NULL && root->right==NULL) return true;
    if(root->left!=NULL && root->right!=NULL){
        return (checkFull(root->left) && checkFull(root->right));
    }
    else return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    node *root=NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int u,v;char c;cin>>u>>v>>c;
        if(root==NULL){
            root=new node(u);
            makeRoot(root,u,v,c);
        }
        else{
            insertNode(root,u,v,c);
        }
    }
    if(checkFull(root)) cout << "Yes";
    else cout << "No";
    return 0;
}