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
int height(node *root){
    if(!root) return 0;
    if(!root->left && !root->right) return 1;
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    return max(leftHeight,rightHeight)+1;
}
node *buildTree(int *a,int n,int i){
    if(i>=n) return NULL;
    node *root=new node(a[i]);
    root->left=buildTree(a,n,2*i+1);
    root->right=buildTree(a,n,2*i+2);
    return root;
}
bool isBalanced(node *root){
    int lH=height(root->left);
    int rH=height(root->right);
    return abs(lH-rH)<=1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    node *root=buildTree(a,n-1,0);
    if(isBalanced(root)) cout << "YES";
    else cout << "NO";
    return 0;
}