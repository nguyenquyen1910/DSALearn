#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    queue<string> q;
    q.push("1");
    while(n--){
        string top=q.front();q.pop();
        cout << top << " ";
        q.push(top+"0");
        q.push(top+"1");
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}