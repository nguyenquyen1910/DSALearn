#include <bits/stdc++.h>
using namespace std;
const int N = 100001;
int main() {
	int n;
	cin >> n;
	int q;
	cin >> q;
	int a[N];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int res[N];
	res[n - 1] = -1;
	stack<int> st;
	st.push(n - 1);
	for (int i = n - 2; i >= 0; i--) {
		if (st.size() && a[i] < a[st.top()]) {
			res[i] = st.top();
			st.push(i);
		}
		else {
			while (st.size() && a[i] >= a[st.top()]) st.pop();
			if (st.size()) res[i] = st.top();
			else res[i] = -1;
			st.push(i);
		}
	}
	while (q--) {
		int x;
		cin >> x;
		x--;
		int cnt = 0;
		while (x != -1) {
			x = res[x];
			cnt++;
		}
		cout << cnt - 1 << endl;
	}
	return 0;
}