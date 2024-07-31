#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    string s,t;cin>>s>>t;
    set<string> se;
    for(int i=0;i<n;i++){
        string x;cin>>x;
        se.insert(x);
    }
    queue<pair<string,int>> q;
    q.push({s,1});
    while(!q.empty()){
        pair<string,int> top=q.front();q.pop();
        if(top.first==t){
            cout << top.second;
            return;
        }
        for(int i=0;i<top.first.size();i++){
            string tmp=top.first;
            for(char j='A';j<='Z';j++){
                tmp[i]=j;
                if(se.count(tmp)){
                    se.erase(tmp);
                    q.push({tmp,top.second+1});
                }
            }
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
        cout << endl;
    }
    return 0;
}