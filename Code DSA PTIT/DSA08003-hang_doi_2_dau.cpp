#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    cin.ignore();
    deque<int> dq;
    while(n--){
        string s;getline(cin,s);
        if(s.find("PUSHBACK")!=string::npos){
            int x=0;
            for(int i=9;i<s.size();i++){
                x=x*10+(s[i]-'0');
            }
            dq.push_back(x);
        }
        else if(s.find("PUSHFRONT")!=string::npos){
            int x=0;
            for(int i=10;i<s.size();i++){
                x=x*10+(s[i]-'0');
            }
            dq.push_front(x);
        }
        else if(s.find("PRINTFRONT")!=string::npos){
            if(dq.empty()) cout << "NONE\n";
            else cout << dq.front() << endl;
        }
        else if(s.find("PRINTBACK")!=string::npos){
            if(dq.empty()) cout << "NONE\n";
            else cout << dq.back() << endl;
        }
        else if(s.find("POPFRONT")!=string::npos){
            if(!dq.empty()) dq.pop_front();
        }
        else if(s.find("POPBACK")!=string::npos){
            if(!dq.empty()) dq.pop_back();
        }
    }
    return 0;
}