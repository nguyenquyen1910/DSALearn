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
node* insertNode(node *root,int key){
    if(root==NULL) return new node(key);
    if(root->data>key) root->left=insertNode(root->left,key);
    else root->right=insertNode(root->right,key);
    return root;
}
void postorder(node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
void testCase(){
    int n;cin>>n;
    int a[n+1];
    node *root=NULL;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        root=insertNode(root,a[i]);
    }
    postorder(root);
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