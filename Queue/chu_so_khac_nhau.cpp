/*Cho hai số nguyên L. R. Hãy đưa ra số các số K nguyên dương trong khoảng [L. R] thỏa mãn điều kiện:
-Tất cả các chữ số của K đều khác nhau. 
-Tất cả các chữ số của K đều nhỏ hơn hoặc bằng 5*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> res;
bool check(int n){
    int l=n%10;n/=10;
    while(n>0){
        if(n%10==l)
            return false;
        l=n%10;
        n/=10;
    }
    return true;
}
void init(){
    queue<int> q;
    for(int i=1;i<=5;i++) q.push(i);
    while(1){
        int x=q.front();q.pop();
        res.push_back(x);
        if(x>=1e5) break;
        for(int i=0;i<=5;i++){
            int tmp=x*10+i;
            if(check(tmp)){
                q.push(tmp);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    init();
    int l,r;cin>>l>>r;
    for(int x : res){
        if(l<=x && x<=r){
            cout << x << " ";
        }
    }
    return 0;
}