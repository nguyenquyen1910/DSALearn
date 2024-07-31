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
vector<vector<int>> res;
void TryTree(node *root,int targetSum,int tmpSum,vector<int> tmp){
    if(root->left==NULL && root->right==NULL){
        if(targetSum==tmpSum)
            res.push_back(tmp);
        return;
    }
    if(root->left){
        tmpSum+=root->left->val;
        tmp.push_back(root->left->val);
        TryTree(root->left,targetSum,tmpSum,tmp);
        tmpSum-=root->left->val;
        tmp.pop_back();
    }
    if(root->right){
        tmpSum+=root->right->val;
        tmp.push_back(root->right->val);
        TryTree(root->right,targetSum,tmpSum,tmp);
        tmpSum-=root->right->val;
        tmp.pop_back();
    }
}
vector<vector<int>> pathSum(node* root, int targetSum) {
    if(root==NULL) return res;
    vector<int> v;
    v.push_back(root->val);
    int tmpSum=root->val;
    TryTree(root,targetSum,tmpSum,v);
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,targetSum;cin>>n>>targetSum;
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
    vector<vector<int>> ans=pathSum(root,targetSum);
    cout << ans.size() << endl;
    for(auto x : ans){
        cout << "[ ";
        for(auto y : x){
            cout << y << " ";
        }
        cout << "]";
    }
    return 0;
}