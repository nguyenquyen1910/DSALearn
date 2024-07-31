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
void makeRoot(node *root,int u,int v,char c){
    if(c=='L') root->left=new node(v);
    else root->right=new node(v);
}
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
int maxx;
int solveFindMax(node* root){
    if(root==NULL) return 0;
    int lMax=solveFindMax(root->left);
    int rMax=solveFindMax(root->right);
    if(root->left==NULL && root->right==NULL)
        return root->val;
    if(root->left==NULL)
        return rMax+root->val;
    if(root->right==NULL)
        return lMax+root->val;
    maxx=max(maxx,lMax+rMax+root->val);
    return max(lMax,rMax)+root->val;
}
void testCase(){
    maxx=-1e9;
    int n;cin>>n;
    node *root=NULL;
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
    solveFindMax(root);
    cout << maxx;
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