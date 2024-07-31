#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,ans;
string s[15],res[15];
int used[100];
void Try(int i,int cnt){
    if(i>n){
        ans=min(ans,cnt);
        return;
    }
    for(int j=1;j<=n;j++){
        if(!used[j]){
            used[j]=1;
            res[i]=s[j];
            map<int,int> mp;
            for(char x : res[i]) mp[x]++;
            for(char x : res[i-1]) mp[x]++;
            int dem=0;
            for(int x='A';x<='Z';x++){
                if(mp[x]==2){
                    dem++;
                }
            }
            if(cnt+dem<ans){
                Try(i+1,cnt+dem);
            }
            used[j]=0;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    Try(1,0);
    cout << ans << endl;
    return 0;
}