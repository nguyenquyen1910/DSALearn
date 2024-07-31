#include<bits/stdc++.h>
using namespace std;
void testCase(){
	string s;cin>>s;
	cout << s << " ";
	while(next_permutation(s.begin(),s.end())){
		cout << s << " ";
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
