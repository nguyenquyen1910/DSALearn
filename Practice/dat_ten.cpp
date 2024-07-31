#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
vector<string> res;
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			vector<string> tmp;
			for(int i=1;i<=k;i++){
				tmp.push_back(res[a[i]]);
			}
			sort(tmp.begin(),tmp.end());
			for(auto x : tmp){
				cout << x << ' ';
			}
			cout << endl;
		}
		else Try(i+1);
	}
}
void testCase(){
	cin>>n>>k;
	set<string> se;
	for(int i=1;i<=n;i++){
		string s;cin>>s;
		se.insert(s);
	}
	n=se.size();
	for(int i=1;i<=k;i++) a[i]=i;
	res.push_back("");
	for(auto x : se){
		res.push_back(x);
	}
	Try(1);
}
int main(){
	testCase();
	return 0;
}
