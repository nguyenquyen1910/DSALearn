#include<bits/stdc++.h>
using namespace std;
string makepass(string &s){
    string res="";
    stringstream ss(s);
    string tmp;
    while(getline(ss,tmp,'/')){
        int n=stoi(tmp);
        res+=to_string(n);
    }
    return res;
}
int main(){
    int t;cin>>t;
    map<string,int> mp;
    cin.ignore();
    while(t--){
        string s;getline(cin,s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while(ss >> tmp){
            for(int i=0;i<tmp.size();i++){
                tmp[i]=tolower(tmp[i]);
            }
            v.push_back(tmp);
        }
        string pass=makepass(v[v.size()-1]);
        string mail=v[v.size()-2];
        for(int i=0;i<v.size()-2;i++){
            mail+=v[i][0];
        }
        if(mp[mail]==0){
            cout << mail << "@xyz.edu.vn" << endl << pass << endl;
        }
        else{
            cout << mail << to_string(mp[mail]+1) << "@xyz.edu.vn" << endl << pass << endl;
        }
        mp[mail]++;
    }
    return 0;
}