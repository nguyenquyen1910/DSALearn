#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
vector<int> res;
bool vst[100];
void Try(int i){
    for(int j=n;j<=m;j++){
        if(!vst[j]){
            vst[j]=1;
            res.push_back(j);
            if(res.size()==(m-n+1)){
                for(int i=0;i<res.size();i++){
                    cout << (char)(res[i]+'A'-1);
                }
                cout << endl;
            }
            else Try(i+1);
            vst[j]=0;
            res.pop_back();
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    char a,b;cin>>a>>b;
    if(a<b) swap(a,b);
    m=(int)(a-'A'+1);
    n=(int)(b-'A'+1);
    Try(1);
    return 0;
}