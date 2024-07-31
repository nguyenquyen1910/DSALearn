#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    vector<int> c;
    vector<int> l,res;
    for(int i=0;i<n;i++){
        if(i%2==0){
            l.push_back(a[i]);
        }
        else c.push_back(a[i]);
    }
    sort(l.begin(),l.end());
    sort(c.begin(),c.end(),greater<int>());
    int tmp1=0,tmp2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout << l[tmp1] << " ";
            tmp1++;
        }
        else{
            cout << c[tmp2] << " ";
            tmp2++;
        }
    }
    return 0;
}