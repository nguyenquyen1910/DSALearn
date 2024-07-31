#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct node{
    int val;
    node *left;
    node *right;
    node(int x){
        val=x;
        left=right=NULL;
    }
};
//Tao goc
void makeRoot(node *root,int u,int v,char c){
    if(c=='L') root->left=new node(v);
    else root->right=new node(v);
}
//Them node khi da co goc
void insertNode(node *root,int u,int v,char c){
    if(root==NULL) return;
    if(root->val==u){
        makeRoot(root,u,v,c);
    }
    else{
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}
//Inorder(left->root->right)
void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}
//Preorder(root->left->right)
void preorder(node *root){
    if(root!=NULL){
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
//Postorder(left->right->root)
void postorder(node * root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->val << " ";
    }
}
//Level-order(duyet theo muc)
void levelorder(node *root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();q.pop();
        cout << temp->val << " ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
}
//Spiral Order(duyet xoan oc)
void spiralOrder(node *root){
    stack<node*> st1,st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            node* top=st1.top();st1.pop();
            cout << top->val << " ";
            if(top->right!=NULL) st2.push(top->right);
            if(top->left!=NULL) st2.push(top->left);
        }
        while(!st2.empty()){
            node* top=st2.top();st2.pop();
            cout << top->val << " ";
            if(top->left!=NULL) st1.push(top->left);
            if(top->right!=NULL) st1.push(top->right);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    node *root=NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int u,v;cin>>u>>v;
        char c;cin>>c;
        if(root==NULL){
            root=new node(u);
            makeRoot(root,u,v,c);
        }
        else{
            insertNode(root,u,v,c);
        }
    }
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelorder(root);
    cout << endl;
    spiralOrder(root);
    return 0;
}