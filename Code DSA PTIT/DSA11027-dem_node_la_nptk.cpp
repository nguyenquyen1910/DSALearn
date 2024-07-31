#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
inline node* buildTree(int *a,int l,int r){
    if(l>r) return NULL;
    int m=l+(r-l)/2;
    node* root=new node(a[m]);
    root->left=buildTree(a,l,m-1);
    root->right=buildTree(a,m+1,r);
    return root;
}
int res=0;
inline void countLeaf(node *root){
    if(root!=NULL){
        if(root->left!=NULL || root->right!=NULL){
            if(root->left!=NULL) countLeaf(root->left);
            if(root->right!=NULL) countLeaf(root->right);
        }
        else{
            res++;
        }
    }
}
inline void postorder(node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
inline void testCase(){
    int n;cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    node *root=buildTree(a,0,n-1);
    res=0;
    countLeaf(root);
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