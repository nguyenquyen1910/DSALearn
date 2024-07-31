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
        if(root->data==u) makeRoot(root,u,v,c);
        else{
            insertNode(root->left,u,v,c);
            insertNode(root->right,u,v,c);
        }
    }
}
vector<vector<int>> levelOrderZigzag(node *root){
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    queue<node*> q;
    bool flag=true;
    q.push(root);
    while(!q.empty()){
        int s=q.size();
        vector<int> tmp;
        for(int i=0;i<s;i++){
            node *top=q.front();q.pop();
            tmp.push_back(top->data);
            if(top->left)
                q.push(top->left);
            if(top->right)
                q.push(top->right);
        }
        if(!flag) reverse(tmp.begin(),tmp.end());
        flag=!flag;
        ans.push_back(tmp);
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
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
    vector<vector<int>> res=levelOrderZigzag(root);
    for(auto x : res){
        for(auto y : x){
            cout << y << " ";
        }
    }
    return 0;
}