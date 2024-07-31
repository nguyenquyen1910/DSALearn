#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        map<int,int> mp;
        for(int &x : a){
            cin>>x;
            mp[x]++;
        }
        int cnt=0;
        for(int i=*min_element(a.begin(),a.end());i<=*max_element(a.begin(),a.end());i++){
            if(mp[i]==0){
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}