// Biểu thức lamda comparetor cho map
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    //Hàm cmp không cần viết ra bên ngoài
    auto cmp = [](const string &a,const string &b){
        if(a.size()!=b.size())
            return a.size()<b.size();
        return a<b;
    };
    map<string, int, decltype(cmp)> mp(cmp);
    while(cin>>s){
        mp[s]++;
    }
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}