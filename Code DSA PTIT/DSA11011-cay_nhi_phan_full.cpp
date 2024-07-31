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
unordered_map<int,node*> mp;
inline void makeRoot(node *root,int u,int v,char c){
    if(c=='L'){
        mp[u]->left=new node(v);
        mp[v]=mp[u]->left;
    }
    else{
        mp[u]->right=new node(v);
        mp[v]=mp[u]->right;
    }
}
inline bool check(node *root){
    if(!root) return true;
    if(!root->left && !root->right) return true;
    if(root->left && root->right){
        return (check(root->left) && check(root->right));
    }
    return false;
}
inline void testCase(){
    mp.clear();
    int n;cin>>n;
    node *root=NULL;
    for(int i=0;i<n;i++){
        int u,v;char c;cin>>u>>v>>c;
        if(root==NULL){
            root=new node(u);
            mp[u]=root;
            makeRoot(root,u,v,c);
        }
        else{
            makeRoot(root,u,v,c);
        }
    }
    cout << check(root);
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