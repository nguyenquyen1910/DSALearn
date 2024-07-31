#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll min_sum(ll a,ll b){
    string n1=to_string(a);
    string n2=to_string(b);
    for(int i=0;i<n1.size();i++){
        if(n1[i]=='6') n1[i]='5';
    }
    for(int i=0;i<n2.size();i++){
        if(n2[i]=='6') n2[i]='5';
    }
    a=stoll(n1);
    b=stoll(n2);
    return 1ll*(a+b);
}
ll max_sum(ll a,ll b){
    string n1=to_string(a);
    string n2=to_string(b);
    for(int i=0;i<n1.size();i++){
        if(n1[i]=='5') n1[i]='6';
    }
    for(int i=0;i<n2.size();i++){
        if(n2[i]=='5') n2[i]='6';
    }
    a=stoll(n1);
    b=stoll(n2);
    return 1ll*(a+b);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll a,b;cin>>a>>b;
    cout << min_sum(a,b) << " " << max_sum(a,b);
    return 0;
}