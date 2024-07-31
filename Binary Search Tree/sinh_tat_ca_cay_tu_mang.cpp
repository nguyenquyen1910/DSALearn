#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
vector<node*> generate_trees(int st,int en){
    if(st>en) return {NULL};
    vector<node*> allTrees;
    for(int i=st;i<=en;i++){
        vector<node*> leftTree=generate_trees(st,i-1);
        vector<node*> rightTree=generate_trees(i+1,en);
        for(auto l : leftTree){
            for(auto r : rightTree){
                auto curTree=new node(i);
                curTree->left=l;
                curTree->right=r;
                allTrees.push_back(curTree);
            }
        }
    }
    return allTrees;
}
vector<node*> generateTrees(int n){
    return n ? generate_trees(1,n) : vector<node*> ();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    vector<node*> allTrees=generateTrees(n);
    for(auto x : allTrees){
        cout << x->data << " ";
        cout << endl;
    }
    return 0;
}