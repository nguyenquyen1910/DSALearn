#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
void Try(int i,int val,vector<int> v){
    if(val==0){
        for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int j=i;j>=1;j--){
        if(val>=j){
            v.push_back(j);
            Try(j,val-j,v);
            v.pop_back();
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    Try(n,n,{});
    return 0;
}