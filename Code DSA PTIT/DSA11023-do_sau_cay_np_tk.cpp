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
int res=INT_MIN;
void depthBinaryTree(node *root,int cnt){
    if(root->left==NULL && root->right==NULL) res=max(res,cnt);
    else{
        if(root->left) depthBinaryTree(root->left,cnt+1);
        if(root->right) depthBinaryTree(root->right,cnt+1);
    }
}
void testCase(){
    int n;cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    node *root=NULL;
    for(int i=0;i<n;i++){
        root=insertNode(root,a[i]);
    }
    res=INT_MIN;
    depthBinaryTree(root,0);
    cout << res;
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