#include <bits/stdc++.h>
using namespace std;
vector<int> adj[20];
int color[20];
int n, m, d;
bool check(int u, int c){
	for(int i = 0; i < adj[u].size(); i++)
		if(c == color[adj[u][i]]) return false;
	return true;
}
bool Try(int u){
	if( u == n + 1) return true;
	for(int c = 1; c <= d; c++){
		if(check(u, c)){
			color[u] = c;
			if(Try(u + 1)) return true;
			color[u] = 0;
		}
	}
	return false;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t, u, v;
	cin >> t;
	while(t--){
		for(int i = 0; i < 20; i++) adj[i].clear();
		memset(color, 0, sizeof color);
		cin >> n >> m >> d;
		for(int i = 1; i <= m; i++){
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		if(Try(1)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}