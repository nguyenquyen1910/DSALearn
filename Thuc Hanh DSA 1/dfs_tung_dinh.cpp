#include <bits/stdc++.h>
using namespace std;
int a[1005][1005], check[1005], par[1005];
int n, s, e, tt, h = 0;
vector<int> ke[1005];
void BFS(int u) {
	queue<int> q;
	q.push(u);
	check[u] = 1;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int k : ke[x]) {
			if (!check[k]) {
				par[k] = x;
				q.push(k);
				check[k] = true;
			}
		}
	}
}
bool visited1[1001] = { false };
int par1[1001] = { 0 };
void dfs(int u) {
	visited1[u] = true;

	for (auto x : ke[u]) {
		if (!visited1[x]) {
			par1[x] = u;
			dfs(x);
		}
	}
}
void in() {
	int st = 1;	
	dfs(st);
	BFS(st);
	for (int i = 2; i <= n; i++) {
		int en = i;
		if (!visited1[en]) {
			cout << -1 << endl;
		}
		else {
			vector<int> b;
			while (en != st) {
				b.push_back(en);
				en = par1[en];
			}

			b.push_back(st);
			reverse(b.begin(), b.end());
			for (int x : b) cout << x << " ";
			cout << endl;
		}
		memset(check, 0, sizeof check);
		memset(par, 0, sizeof par);
		int en1 = i;
		BFS(en1);
		if (check[1]) {
			vector<int> b;
			int en = 1;
			while (en != en1) {
				b.push_back(en);
				en = par[en];
			}

			b.push_back(en1);
			reverse(b.begin(), b.end());
			for (int x : b) cout << x << " ";
			cout << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
}
int main() {
	int t = 1;
	while (t--) {
		cin >> n >> tt;
		for (int i = 0; i <= n; i++) ke[i].clear();
		memset(a, 0, sizeof(a));
		memset(check, 0, sizeof check);
		memset(par, 0, sizeof par);
		while (tt--) {
			int z, m;
			cin >> z >> m;
			ke[z].push_back(m);
			ke[m].push_back(z);
		}
		in();
	}
	return 0;
}