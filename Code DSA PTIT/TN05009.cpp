#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
bool check[1001];
vector<int> A[1001];
bool ok;
string res;

void DFS(int u, string s,int par) {
	if(ok)return;
	check[u] = true;
	for (auto x : A[u]) {
		if (!check[x])DFS(x, s + " " + to_string(x), u);
		else if (x != par && x == 1)ok = true, res = s;
	}
}

void testCase(){
    for(int i=0;i<1001;i++){
            A[i].clear();
            check[i]=false;
        }
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a, b; cin >> a >> b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    for(int i=1;i<=n;i++) sort(A[i].begin(),A[i].end());
    ok = false;
    DFS(1, "1",0);
    if (!ok)cout << "NO\n";
    else {
        cout << res <<" "<< 1 << endl;
    }
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;cin>>t;
    while(t--){
        testCase();
        cout << endl;
	}
    return 0;
}