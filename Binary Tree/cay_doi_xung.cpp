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
        if(root->data==u) makeRoot(root,u,v,c);
        else{
            insertNode(root->left,u,v,c);
            insertNode(root->right,u,v,c);
        }
    }
}
bool isSymmetric(node* left, node* right) {
    if (left == NULL && right == NULL) return true;
    if (left == NULL || right == NULL) return false;
    return (left->data == right->data && isSymmetric(left->left, right->right) && isSymmetric(left->right, right->left));
}
bool isSymmetricTree(node* root) {
    if (root == NULL) return true;
    return isSymmetric(root->left, root->right);
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
    if(isSymmetricTree(root)) cout << "YES";
    else cout << "NO";
    return 0;
}