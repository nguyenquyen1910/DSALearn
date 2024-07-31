#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[505][505];
bool vst[505][505];
bool check(int a[][505],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1) return false;
        }
    }
    return true;
}
void testCase(){
    memset(vst,0,sizeof(vst));
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    while(true){
        bool ok=0;
        memset(vst,0,sizeof(vst));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vst[i][j]){
                    if(a[i][j]==2){
                        if(i>0 && a[i-1][j]==1){
                            a[i-1][j]=2;vst[i-1][j]=1;
                            ok=1;
                        }
                        if(i<n-1 && a[i+1][j]==1){
                            a[i+1][j]=2;vst[i+1][j]=1;
                            ok=1;
                        }
                        if(j>0 && a[i][j-1]==1){
                            a[i][j-1]=2;vst[i][j-1]=1;  
                            ok=1;
                        }
                        if(j<m-1 && a[i][j+1]==1){
                            a[i][j+1]=2;vst[i][j+1]=1;
                            ok=1;
                        }
                    }
                }
            }
        }
        if(!ok) break;
        cnt++;
    }
    if(!check(a,n,m)) cout << -1;
    else cout << cnt;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}