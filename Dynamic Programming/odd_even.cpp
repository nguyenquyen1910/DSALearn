/*Bạn được cung cấp một mảng A gồm N giá trị nguyên dương. Một mảng con của mảng này được gọi là mảng
con Chẵn lẻ nếu số lượng các số nguyên lẻ trong mảng con này bằng số lượng các số nguyên chẵn trong mảng con này.
Tìm số mảng con Lẻ-Chẵn cho mảng đã cho.*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    map<int,int> mp;
    int c=0,l=0;
    mp[0]=1;ll ans=0;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(x%2==0) ++c;
        else ++l;
        if(mp.count(c-l)){
            ans+=mp[c-l];
        }
        mp[c-l]++;
    }
    cout << ans;
    return 0;
}