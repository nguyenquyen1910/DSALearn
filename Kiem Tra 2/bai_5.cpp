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
node *insertNode(node *root,int key){
    if(root==NULL) return new node(key);
    if(root->data>key){
        root->left=insertNode(root->left,key);
    }
    else root->right=insertNode(root->right,key);
    return root;
}
vector<vector<int>> levelOrder(node *root){
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    queue<node*> q;
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
        reverse(tmp.begin(),tmp.end());
        ans.push_back(tmp);
    }
    return ans;
}
void testCase(){
    node *root=NULL;
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    root=new node(a[0]);
    for(int i=1;i<n;i++){
        root=insertNode(root,a[i]);
    }
    vector<vector<int>> res=levelOrder(root);
    for(auto x : res){
        for(auto y : x){
            cout << y << " ";
        }
    }
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