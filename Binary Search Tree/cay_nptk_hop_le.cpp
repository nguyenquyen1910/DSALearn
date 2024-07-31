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
bool checkTrue(node *root,ll l,ll r){
    if(root==NULL) return true;
    if(root->data<r && root->data>l){
        return checkTrue(root->left,l,root->data) && checkTrue(root->right,root->data,r);
    }
    else return false;
}
bool isValidTree(node *root){
    ll min=-1e18,max=1e18;
    return checkTrue(root,min,max);
}
node *buildTree(int *a,int n,int i){
    if(i>n) return NULL;
    node *root=new node(a[i]);
    root->left=buildTree(a,n,2*i+1);
    root->right=buildTree(a,n,2*i+2);
    return root;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    node *root=buildTree(a,n-1,0);
    if(isValidTree(root)) cout << "YES";
    else cout << "NO";
    return 0;
}