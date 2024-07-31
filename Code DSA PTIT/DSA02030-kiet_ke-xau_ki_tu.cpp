#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k;
char c;
vector<int> a;
void Try(int i){
    for(int j=i;j<=n;j++){
        a.push_back(j);
        if(a.size()==k){
            for(int i=0;i<a.size();i++){
                printf("%c",a[i]+64);
            }
            printf("\n");
        }
        else Try(j);
        a.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>c>>k;
    n=int(c-64);
    Try(1);
    return 0;
}