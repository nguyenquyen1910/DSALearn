#include<bits/stdc++.h>
using namespace std;
vector<int> res;
int tt(vector<int> x,int n){
	int ans;
	for(int i=0;i<x.size();i++){
		if(x[i]>=n){
			ans=x[i];
			break;
		}
	}
	return ans;
}
void init(){
	queue<int> q;
	q.push(4);
	q.push(7);
	while(!q.empty()){
		int top=q.front();q.pop();
		if(top>1e9) break;
		res.push_back(top);
		q.push(top*10+4);
		q.push(top*10+7);
	}
}
int main(){
	init();
	int l,r;cin>>l>>r;
	long long sum=0;
	for(int i=l;i<=r;i++){
		sum+=tt(res,i);
	}
	cout << sum;
	return 0;
}
