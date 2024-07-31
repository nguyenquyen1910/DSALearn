#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
node *buildTree(string s){
    if(s.empty()) return NULL;
    stringstream ss(s);
    string tmp;
    vector<node*> nodes;
    while(ss >> tmp){
        if(tmp=="null"){
            nodes.push_back(NULL);
        }
        else{
            int data=stoi(tmp);
            nodes.push_back(new node(data));
        }
    }
    queue<node*> q;
    node* root=nodes[0];
    q.push(root);
    for(int i=1;i<nodes.size();i++){
        node* top=q.front();q.pop();
        if(top!=NULL){
            top->left=nodes[i];
            q.push(nodes[i]);
            ++i;
            if(i<nodes.size()){
                top->right=nodes[i];
                q.push(nodes[i]);
            }
        } 
    }
    return root;
}
bool checkSum(node *root,int targetSum){
    if(root==NULL) return false;
    if(root->left==NULL && root->right==NULL) return targetSum==root->data;
    bool lS=checkSum(root->left,targetSum-root->data);
    bool rS=checkSum(root->right,targetSum-root->data);
    return lS || rS;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;getline(cin,s);
    node *root=buildTree(s);
    int targetSum;cin>>targetSum;
    if(checkSum(root,targetSum)) cout << "YES";
    else cout << "NO";
    return 0;
}