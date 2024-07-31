#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &x : a) cin>>x;
    sort(a.begin(),a.end());
    vector<int> res;
    res.push_back(a[0]*a[1]);
    res.push_back(a[n-1]*a[n-2]);
    res.push_back(a[0]*a[1]*a[n-1]);
    res.push_back(a[n-1]*a[n-2]*a[n-3]);
    sort(res.rbegin(),res.rend());
    cout << res[0] << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    testcase();
    return 0;
}