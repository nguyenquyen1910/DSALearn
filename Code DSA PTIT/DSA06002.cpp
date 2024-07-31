#include<bits/stdc++.h>
using namespace std;
int x;
bool cmp(pair<int,int> &a,pair<int,int> &b){
    if(abs(x-a.first)!=abs(x-b.first))
        return abs(x-a.first)<abs(x-b.first);
    return a.second<b.second;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n>>x;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            int ma;cin>>ma;
            v.push_back({ma,i});
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++){
            cout << v[i].first << " ";
        }
        cout << endl;
    }
    return 0;
}