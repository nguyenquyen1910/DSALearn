#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
int a[100];vector<string> res,ans;
int ch[100];
int used[100];
string x="";
void Try2(int i){
    for(int j='A';j<='A'+n-1;j++){
        if(!used[j]){
            used[j]=1;
            x+=j;
            if(i==n) ans.push_back(x);
            else Try2(i+1);
            x.pop_back();
            used[j]=0;
        }
    }
}
void Try(int i){
    for(int j=1;j<=n;j++){
        a[i]=j;
        if(i==n){
            string tmp="";
            for(int i=1;i<=n;i++){
                tmp+=to_string(a[i]);
            }
            res.push_back(tmp);
        }
        else Try(i+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    Try(1);
    Try2(1);
    for(auto x : ans){
        for(auto y : res){
            cout << x << y << endl;
        }
    }
    return 0;
}