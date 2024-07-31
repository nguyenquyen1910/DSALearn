#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int solve(int a,int b,char c){
    if(c=='+') return a+b;
    else if(c=='-') return a-b;
    else if(c=='*') return a*b;
    else if(c=='/') return a/b;
    return 0;
}
void testCase(){
    int n;cin>>n;
    cin.ignore();
    string s;getline(cin,s);
    queue<int> q;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==' ') continue;
        if(isdigit(s[i])){
            string tmp="";
            while(isdigit(s[i])){
                tmp=s[i--]+tmp;
            }
            ++i;
            q.push(stoi(tmp));
        }
        else{
            int top1=q.front();q.pop();
            int top2=q.front();q.pop();
            q.push(solve(top2,top1,s[i]));
        }
    }
    cout << q.front();
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