#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int maxArea(vector<int> &a){
    int n=a.size();
    vector<int> l(n),r(n);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()]>=a[i]) st.pop();
        if(st.empty()) l[i]=0;
        else l[i]=st.top()+1;
        st.push(i);
    }
    while(!st.empty()) st.pop();
    for(int i=n-1;i>=1;i--){
        while(!st.empty() && a[st.top()]>=a[i]) st.pop();
        if(st.empty()) r[i]=n-1;
        else r[i]=st.top()-1;
        st.push(i);
    }
    int res=0;
    for(int i=0;i<n;i++){
        res=max(res,(r[i]-l[i]+1)*a[i]);
    }
    return res;
}
void testCase(){
    int n,m;cin>>n>>m;
    vector<vector<int>> a(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]==1 && i>0 && a[i-1][j]>0){
                a[i][j]=a[i-1][j]+1;
            }
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        res=max(res,maxArea(a[i]));
    }
    cout << res;
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