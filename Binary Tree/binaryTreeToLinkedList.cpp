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
node *buildTree(vector<string> &v,int i){
    if(i>=v.size() || v[i]=="null") return NULL;
    node *root=new node(stoi(v[i]));
    root->left=buildTree(v,2*i+1);
    root->right=buildTree(v,2*i+2);
    return root;
}
void binaryTreeToLinkedList(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    stack<node*> st;
    st.push(root);
    while(!st.empty()){
        node *top=st.top();
        st.pop();
        if(top->right!=NULL) st.push(top->right);
        if(top->left!=NULL) st.push(top->left);
        if(!st.empty()) top->right=st.top();
        top->left=NULL;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    node *root=buildTree(v,0);
    binaryTreeToLinkedList(root);
    return 0;
}