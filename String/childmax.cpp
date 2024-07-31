// Tìm xâu con liên tiếp có các kí tự giống nhau dài nhất
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int cnt=1,res=1;
    string ans="";
    ans+=s[0];
    s+="@";
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i-1]){
            ++cnt;
        }
        else{
            if(cnt>res){
                res=cnt;
                ans=string(res,s[i-1]);//Tao xau string co do dai res
            }
            else if(cnt==res){
                string tmp=string(res,s[i-1]);
                if(tmp>ans) ans=tmp;// Nếu có nhiều xâu có cùng độ dài thì chọn xâu có thứ tự từ điển lớn nhất
            }
            cnt=1;
        }
    }
    cout << ans;
    return 0;
}