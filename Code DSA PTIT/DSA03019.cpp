#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        ll p, q;
		cin >> p >> q;
		while (true) {
			if (q % p == 0) {
				cout << 1 << "/" << q / p << endl;
				break;
			}

			ll res = q / p + 1;
			cout << 1 << "/" << res << " + ";
			p = p * res - q;
			q = q * res;
		}
    }
    return 0;
}