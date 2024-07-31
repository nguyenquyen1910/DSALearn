#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
	string s;cin>>s;
	stack<string> st;
	for(int i=s.size()-1;i>=0;i--){
		if(isalpha(s[i])){
			st.push(string(1,s[i]));
		}
		else{
			string top1=st.top();st.pop();
			string top2=st.top();st.pop();
			string res="("+top1+s[i]+top2+")";
			st.push(res);
		}
	}
	cout << st.top();
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