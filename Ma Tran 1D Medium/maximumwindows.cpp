/*Tìm phần tử nhỏ nhất và lớn nhất của cửa sổ con có k phần tử*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    multiset<int> ms;
    for(int i=0;i<k;i++){
        ms.insert(a[i]);
    }
    cout << *ms.begin() << " " << *ms.rbegin() << endl;
    for(int i=1;i<=n-k;i++){
        auto it=ms.find(a[i-1]);
        ms.erase(it);
        ms.insert(a[i+k-1]);
        cout << *ms.begin() << " " << *ms.rbegin() << endl;
    }
    return 0;
}