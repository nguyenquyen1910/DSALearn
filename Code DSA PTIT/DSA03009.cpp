#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct job{
    int id,deadline,profit;
};
bool cmp(job a,job b){
    return a.profit>b.profit;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        job a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].id>>a[i].deadline>>a[i].profit;
        }
        sort(a,a+n,cmp);
        int ans=0,cnt=0;
        int used[1001]={0};
        for(int i=0;i<n;i++){
            for(int j=a[i].deadline-1;j>=0;j--){
                if(!used[j]){
                    cnt++;
                    ans+=a[i].profit;
                    used[j]=1;
                    break;
                }
            }   
        }
        cout << cnt << " " << ans << endl;
    }
    return 0;
}