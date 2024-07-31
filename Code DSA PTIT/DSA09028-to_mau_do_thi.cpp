#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
int color[1005];
int n,m,d;
bool check(int u,int c){
	for(auto v : adj[u]){
		if(c==color[v]) return false;
	}
	return true;
}
bool Try(int u){
	if(u==n+1) return true;
	for(int c=1;c<=d;c++){
		if(check(u,c)){
			color[u]=c;
			if(Try(u+1)) return true;
			color[u]=0;
		}
	}
	return false;
}
void testCase(){
	adj.clear();adj.resize(1005);
	memset(color,0,sizeof(color));
	cin>>n>>m>>d;
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	if(Try(1)) cout << "YES";
	else cout << "NO";
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