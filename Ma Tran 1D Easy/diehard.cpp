/*Một vé die-hard có giá 25, bài toán là kiểm tra xem cửa hàng có đủ tiền thối lại cho khách hàng không?*/
#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n){
    int cnt25=0,cnt50=0;
    for(int i=0;i<n;i++){
        if(a[i]==25){
            ++cnt25;
        }
        else if(a[i]==50){
            if(cnt25==0){
                return false;
            }
            else{
                --cnt25;
                ++cnt50;
            }
        }
        else{
            if(cnt25==0 || cnt25*25+cnt50*50<75){
                return false;
            }
            else if(cnt50!=0){
                --cnt50;--cnt25;
            }
            else{
                cnt25-=3;
            }
        }
    }
    return true;
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    if(check(a,n)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}