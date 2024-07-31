//Cho n cặp dấu ngoặc đơn, hãy viết hàm để tạo ra tất cả các tổ hợp dấu ngoặc đơn hợp lệ.
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void Try(vector<string> &res,string cur,int l,int r,int n){
    if(cur.size()==2*n){
        res.push_back(cur);
        return;
    }
    if(l<n){
        Try(res,cur+'(',l+1,r,n);
    }
    if(r<l){
        Try(res,cur+')',l,r+1,n);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    vector<string> res;
    Try(res,"",0,0,n);
    for(auto x : res){
        cout << x << " ";
    }
    return 0;
}