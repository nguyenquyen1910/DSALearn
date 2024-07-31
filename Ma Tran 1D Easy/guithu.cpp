/*Một người chỉ có thể gửi thư nếu người nhận ở thành phố khác. Chi phí gửi bằng khoảng cách giữa 2 thành phố, 
đối với mỗi thành phố tính 2 giá trị mini maxi, mini thể hiện chi phí tối thiểu để gửi, maxi là chi phí lớn nhất*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r" ,stdin);
    freopen("output.txt", "w" ,stdout);
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    for(int i=0;i<n;i++){
        if(i==0){
            cout << a[1]-a[0] << " " << a[n-1]-a[0] << endl;
        }
        else if(i==n-1){
            cout << a[n-1]-a[n-2] << " " << a[n-1]-a[0] << endl;
        } 
        else{
            cout << min(a[i+1]-a[i],a[i]-a[i-1]) << " " << max(a[i]-a[0],a[n-1]-a[i]) << endl;
        }
    }
    return 0;
}