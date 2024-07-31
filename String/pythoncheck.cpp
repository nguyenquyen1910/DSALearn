// Cho 1 chuỗi kí tự kiểm tra xem chuỗi có những kí tự không liền nhau có tạo được chứ python không
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    string t="python";
    int idx=0;
    for(char x : s){
        if(x==t[idx]){
            ++idx;
        }
        if(idx==6){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}