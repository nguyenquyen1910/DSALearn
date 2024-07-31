#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int k;cin>>k;
    string a,b;cin>>a>>b;
    while(a.size()>b.size()) b="0"+b;
    while(a.size()<b.size()) a="0"+a;
    int carry=0;
    string res="";
    for(int i=a.size()-1;i>=0;i--){
        int x=(a[i]-'0')+(b[i]-'0')+carry;
        res=(char)(x%k+'0')+res;
        carry=x/k;
    }
    if(carry) res=(char)(carry+'0')+res;
    cout << res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}