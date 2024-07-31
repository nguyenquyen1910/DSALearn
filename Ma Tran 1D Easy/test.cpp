/*Biến đổi 6 thành 5, 5 thành 6 sau đó tính tổng nhỏ nhất lớn nhất của 2 số dùng file*/
#include<bits/stdc++.h>
using namespace std;
string maxtong(string &a,string &b){
    string c;
    for(int i=0;i<a.size();i++){
        if(a[i]=='5'){
            a[i]='6';
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='5'){
            b[i]='6';
        }
    }
    if(a.size()<b.size()) swap(a,b);
    while(a.size()!=b.size()) b="0"+b;
    int nho=0;
    for(int i=a.size()-1;i>=0;i--){
        int x=a[i]-'0'+b[i]-'0'+nho;
        nho=x/10;
        c.push_back(x%10+'0');
    }
    if(nho>0){
        c.push_back(nho+'0');
    }
    reverse(c.begin(),c.end());
    return c;
}
string mintong(string &a,string &b){
    string c;
    for(int i=0;i<a.size();i++){
        if(a[i]=='6'){
            a[i]='5';
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='6'){
            b[i]='5';
        }
    }
    if(a.size()<b.size()) swap(a,b);
    while(a.size()!=b.size()) b="0"+b;
    int nho=0;
    for(int i=a.size()-1;i>=0;i--){
        int x=a[i]-'0'+b[i]-'0'+nho;
        nho=x/10;
        c.push_back(x%10+'0');
    }
    if(nho>0){
        c.push_back(nho+'0');
    }
    reverse(c.begin(),c.end());
    return c;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;cin>>n;
    while(n--){
        string a,b;cin>>a>>b;
        cout << mintong(a,b) << " " << maxtong(a,b) << endl;
    }
    return 0;
}