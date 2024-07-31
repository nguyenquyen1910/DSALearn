/*Bạn được cho biết thời gian đến và đi của n khách hàng trong một nhà hàng. 
Số lượng khách hàng có mặt tại cửa hàng ở 1 thời điểm nhiều nhất là bao nhiêu?*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct timeline{
    int arri,depar;
};
int main(){
    int n;cin>>n;
    vector<timeline> a(n);
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        a[i].arri=x;
        a[i].depar=y;
    }
    vector<pair<int,int>> v;
    for(auto &i : a){
        v.push_back({i.arri,1});
        v.push_back({i.depar,-1});
    }
    sort(v.begin(),v.end());
    int cnt=0,ans=0;
    for(auto &i : v){
        cnt+=i.second;
        ans=max(ans,cnt);
    }
    cout << ans;
    return 0;
}