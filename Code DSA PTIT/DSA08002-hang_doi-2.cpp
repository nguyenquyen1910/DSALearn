#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    cin.ignore();
    queue<int> q;
    while(n--){
        string s;getline(cin,s);
        if(s.find("PUSH")!=string::npos){
            int x=0;
            for(int i=5;i<s.size();i++){
                x=x*10+(s[i]-'0');
            }
            q.push(x);
        }
        else if(s.find("POP")!=string::npos){
            if(!q.empty()) q.pop();
        }
        else if(s.find("PRINTFRONT")!=string::npos){
            if(q.empty()) cout << "NONE\n";
            else cout << q.front() << endl;
        }
    }
    return 0;
}