/*John có một đàn bò. Một ngày đẹp trời, anh ta quyết định mua xe tải với khả năng chở được C kg 
(1000 sts 25000) để đưa những con bò đi xem phim. Cho số con bò là N (20 s N s 100) và khối lượng 
w[i] của từng con (đều nhỏ hơn C), hãy cho biết khối lượng bò lớn nhất mà John có thể đưa đi xem phim là bao nhiêu.*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int c,n;cin>>c>>n;
    int w[n];int sum=0;
    for(int i=0;i<n;i++){
        cin>>w[i];
        sum+=w[i];
    }
    vector<bool> F(c+1,false);
    F[0]=true;
    for(int i=0;i<n;i++){
        for(int j=sum;j>=w[i];j--){
            if(F[j-w[i]]){
                F[j]=true;
            }
        }
    }
    for(int i=c;i>=0;i--){
        if(F[i]){
            cout << i;
            break;
        }
    }
    return 0;
}