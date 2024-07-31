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
node *insertNode(node *root,int x){
    if(root==NULL) return new node(x);
    if(root->data>x) root->left=insertNode(root->left,x);
    else root->right=insertNode(root->right,x);
    return root;
}
node *minNode(node *root){
    node *tmp=root;
    while(tmp!=NULL && tmp->left!=NULL){
        tmp=tmp->left;
    }
    return tmp;
}
node *deleteNode(node *root,int key){
    if(root==NULL) return root;
    if(key<root->data){
        root->left=deleteNode(root->left,key);
    }
    else if(root->data<key){
        root->right=deleteNode(root->right,key);
    }
    else{
        if(root->left==NULL){
            node *tmp=root->right;
            delete root;
            return tmp;
        }
        else if(root->right==NULL){
            node *tmp=root->left;
            delete root;
            return tmp;
        }
        else{
            node *tmp=minNode(root->right);
            root->data=tmp->data;
            root->right=deleteNode(root->right,tmp->data);
        }
    }
    return root;
}
void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    node *root=NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(root==NULL){
            root=new node(x);
        }
        else insertNode(root,x);
    }
    int x;cin>>x;
    root=deleteNode(root,x);
    inorder(root);
    return 0;
}