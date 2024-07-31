#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int min_val=2e6;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=a[i]+a[j];
                if(abs(sum)<abs(min_val)){
                    min_val=sum;
                }
            }
        }
        cout << min_val << endl;
    }
    return 0;
}