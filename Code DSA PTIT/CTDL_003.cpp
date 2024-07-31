#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,w,a[100],b[100],c[100],final=0;
void init(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    if(i==0) final=1;
    a[i]=1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("data.in","r",stdin);
    cin>>n>>w;
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n;i++) cin>>c[i];
    init();vector<int> v;
    ll res=0;
    while(!final){
        ll sum=0,value=0,tmp=0;
        for(int i=1;i<=n;i++){
            if(a[i]){
                sum+=b[i];
                value+=c[i];
            }
        }
        if(sum<=w && value>res){
            res=value;
            v.clear();
            for(int i=1;i<=n;i++){
                v.push_back(a[i]);
            }
        }
        sinh();
    }
    cout << res << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    return 0;
}