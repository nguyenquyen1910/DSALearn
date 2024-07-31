//Cho 1 day so, biet 1 cap co the thay nhau la o giua chung khong co ai lon hon, Tinh so cap thay duoc
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    stack<pair<int,int>> st;//pair de luu cap gia tri gom x va so lan xuat hien
    ll cnt=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        while(!st.empty() && st.top().first<x){
            cnt+=st.top().second;
            st.pop();
        }
        if(st.empty()) st.push({x,1});
        else{
            if(st.top().first==x){
                cnt+=st.top().second;
                if(st.size()>1){
                    cnt++;
                }
                st.top().second++;
            }
            else{
                cnt++;
                st.push({x,1});
            }
        }
    }
    cout << cnt;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    testCase();
    return 0;
}