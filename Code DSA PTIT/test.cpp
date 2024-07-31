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
void insertNode(node *root,int u,int v,char c){
	if(c=='L'){
		mp[u]->left=new node(v);
		mp[v]=mp[u]->left;
	}
	else{
		mp[u]->right=new node(v);
		mp[v]=mp[u]->right;
	}
}
int res;
int solveFindMax(node* root){
    if(root==NULL) return 0;
    int lMax=solveFindMax(root->left);
    int rMax=solveFindMax(root->right);
    if(root->left==NULL && root->right==NULL)
        return root->data;
    if(root->left==NULL)
        return rMax+root->data;
    if(root->right==NULL)
        return lMax+root->data;
    res=max(res,lMax+rMax+root->data);
    return max(lMax,rMax)+root->data;
}
void testCase(){
	res=INT_MIN;
	mp.clear();
	node* root=NULL;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int u,v;char c;cin>>u>>v>>c;
		if(!root){
			root=mp[u]=new node(u);
			insertNode(root,u,v,c);
		}
		else insertNode(root,u,v,c);
	}
	solveFindMax(root);
	cout << res;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;cin>>t; 
	while(t--){
		testCase();
		cout << endl;
	}
	return 0;
}
