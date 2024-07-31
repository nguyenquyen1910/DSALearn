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
node *buildTree(int a[],int index,int n){
    if(index>n){
        return NULL;
    }
    node *root=new node(a[index]);
    root->left=buildTree(a,2*index+1,n);
    root->right=buildTree(a,2*index+2,n);
    return root;
}
void inOrder(node *root){
    if(root){
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
void testCase(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    node *root=buildTree(a,0,n-1);
    inOrder(root);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}
