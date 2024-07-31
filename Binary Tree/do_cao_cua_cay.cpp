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
int maxHeight(node *root){
    if(root==NULL) return 0;
    else{
        int l=maxHeight(root->left);
        int r=maxHeight(root->right);
        return max(l,r)+1;
    }
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
            makeRoot(root,u,v,c);
        }
        else{
            insertNode(root,u,v,c);
        }
    }
    cout << maxHeight(root);
    return 0;
}