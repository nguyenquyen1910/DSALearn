#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    cin.ignore();
    queue<int> q;
    while(n--){
        string s;getline(cin,s);
        if(s[0]!='3'){
            if(s[0]=='1'){
                cout << q.size() << endl;
            }
            else if(s[0]=='2'){
                cout << (q.empty() ? "YES\n" : "NO\n") << endl;
            }
            else if(s[0]=='4'){
                if(!q.empty()) q.pop();
            }
            else if(s[0]=='5'){
                cout << (q.empty() ? -1 : q.front()) << endl;
            }
            else if(s[0]=='6'){
                cout << (q.empty() ? -1 : q.back()) << endl;
            }
        }
        else{
            int x=0;
            for(int i=2;i<s.size();i++){
                x=x*10+(s[i]-'0');
            }
            q.push(x);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
    }
    return 0;
}