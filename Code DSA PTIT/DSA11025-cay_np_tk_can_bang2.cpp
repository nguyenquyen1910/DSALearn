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
inline node* buildTree(int *a,int left,int right) {
    if(left>right) return NULL;
	int mid = left+(right-left)/2;
	node* root=new node(a[mid]);
	root->left = buildTree(a,left,mid-1);
	root->right = buildTree(a,mid+1,right);
    return root;
}
inline void preorder(node *root){
    if(root!=NULL){
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
inline void testCase(){
    int n;cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    node* root = buildTree(a,0,n-1);
    preorder(root);
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