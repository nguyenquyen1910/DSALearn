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
        if(root->data==u){
            makeRoot(root,u,v,c);
        }
        else{
            insertNode(root->left,u,v,c);
            insertNode(root->right,u,v,c);
        }
    }
}
void spiralOrder(node *root){
    if(root==NULL) return;
    stack<node*> st1,st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            node *top=st1.top();st1.pop();
            cout << top->data << " ";
            if(top->right!=NULL) st2.push(top->right);
            if(top->left!=NULL) st2.push(top->left);
        }
        while(!st2.empty()){
            node *top=st2.top();st2.pop();
            cout << top->data << " ";
            if(top->left!=NULL) st1.push(top->left);
            if(top->right!=NULL) st1.push(top->right);
        }
    }
}
void testCase(){
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
    spiralOrder(root);
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