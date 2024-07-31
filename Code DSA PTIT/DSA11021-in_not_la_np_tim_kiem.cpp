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
node *insertNode(node* root,int key){
    if(root==NULL) return new node(key);
    if(root->data>key) root->left=insertNode(root->left,key);
    else root->right=insertNode(root->right,key);
    return root;
}
void printLeaf(node *root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout << root->data << ' ';
    else{
        if(root->left!=NULL) printLeaf(root->left);
        if(root->right!=NULL) printLeaf(root->right);
    }
}
void testCase(){
    int n;cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    node *root=NULL;
    for(int i=0;i<n;i++) root=insertNode(root,a[i]);
    printLeaf(root);
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