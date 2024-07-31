//  Kí tự xuất hiện ở cả 2 xâu
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    set<char> se;
    for(int i=0;i<s1.size();i++){
        se.insert(s1[i]);
    }
    for(int i=0;i<s2.size();i++){
        if(se.count(s2[i])){
            cout << s2[i];
        }
    }
    return 0;
}