#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll sum = 0;
struct node{
    int val;
    node *left;
    node *right;
    node(int x){
        val=x;
        left=right=NULL;
    }
};
unordered_map<int, node*> mp;
void makeRoot(node *root,int u,int v,char c){
    if(c=='L') {
    	mp[u]->left=new node(v);
    	mp[v] = mp[u]->left;
	}
    else{
    	mp[u]->right=new node(v);
    	mp[v] = mp[u]->right;
	} 
}
ll sumRightLeaf(node *root){
    if(root==NULL) return 0;
    queue<pair<node*,bool>> q;
    q.push({root,false});
    ll sum=0;
    while(!q.empty()){
        auto [top, isRight] = q.front();q.pop();
        if(isRight && top->left==NULL && top->right==NULL){
            sum+=top->val;
        }
        if(top->left) q.push({top->left,false});
        if(top->right) q.push({top->right,true});
    }
    return sum;
}
void testCase(){
	mp.clear();
    int n;cin>>n;
    node* root=NULL;
    for(int i=0;i<n;i++){
        int u,v;char c;cin>>u>>v>>c;
        if(root==NULL){
            root=new node(u);
            mp[u] = root;
            makeRoot(root,u,v,c);
        }
        else{
            makeRoot(root,u,v,c);
        }
    }
    cout << sumRightLeaf(root);
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
