#include<bits/stdc++.h>
using namespace std;
char c;int n;
int k;int a[100];
void Try(int i){
	for(int j=a[i-1];j<=n;j++){
		a[i]=j;
		if(i==k){
			for(int i=1;i<=k;i++){
				cout << (char)(a[i]+'A'-1);
			}
			cout << endl;
		}
		else Try(i+1);
	}
}
int main(){
	cin>>c>>k;
	n=c-'A'+1;
	a[0]=1;
	Try(1);
	return 0;
}
