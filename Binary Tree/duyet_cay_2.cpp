// Inorder,Postorder->levelorder
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
node *TryTree(vector<int> &inorder,int iS,int iE,vector<int> &postorder,int pS,int pE){
    if(iS>iE) return NULL;
    node *root=new node(postorder[pE]);
    int elm=iS;
    while(inorder[elm]!=root->data) elm++;
    int nElm=elm-iS;
    root->left=TryTree(inorder,iS,elm-1,postorder,pS,pS+nElm-1);
    root->right=TryTree(inorder,elm+1,iE,postorder,pS+nElm,pE-1);
    return root;
}
node *buildTree(vector<int> &inorder,vector<int> &postorder){
    return TryTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
}
void spiralorder(node *root){
    stack<node*> st1,st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            node *top=st1.top();st1.pop();
            cout << top->data << ' ';
            if(top->right!=NULL) st2.push(top->right);
            if(top->left!=NULL) st2.push(top->left);
        }
        while(!st2.empty()){
            node *top=st2.top();st2.pop();
            cout << top->data << ' ';
            if(top->left!=NULL) st1.push(top->left);
            if(top->right!=NULL) st1.push(top->right);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    vector<int> inorder(n);
    vector<int> postorder(n);
    for(int i=0;i<n;i++){
        cin>>inorder[i];
    }
    for(int i=0;i<n;i++){
        cin>>postorder[i];
    }
    spiralorder(buildTree(inorder,postorder));
    return 0;
}