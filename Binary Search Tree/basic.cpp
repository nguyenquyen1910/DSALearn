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
//Thao tac tim kiem
bool search(node *root,int key){
    if(root==NULL) return false;
    if(root->data==key) return true;
    else if(root->data>key){
        return search(root->left,key);
    }
    else return search(root->right,key);
}
//Thao tac chen
node* insertNode(node *root,int key){
    if(root==NULL){
        return new node(key);
    }
    if(key<root->data){
        root->left=insertNode(root->left,key);
    }
    else{
        root->right=insertNode(root->right,key);
    }
    return root;
}
//Thao tac xoa
//Buoc 1: tim node con x nho nhat hon hon node can xoa
node *minNode(node *root){
    node *tmp=root;
    while(tmp!=NULL && tmp->left!=NULL){
        tmp=tmp->left;
    }
    return tmp;
}
node* deleteNode(node* root,int key){
    if(root==NULL) return root;
    if(key<root->data){
        root->left=deleteNode(root->left,key);
    }
    else if(key>root->data){
        root->right=deleteNode(root->right,key);
    }
    else{
        if(root->left==NULL){
            node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            node *temp=root->left;
            delete root;
            return temp;
        }
        else{
            node *temp=minNode(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
        }
    }
    return root;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    node *root=NULL;
    int n;cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    return 0;
}