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
int sum=0;
void toNum(node *root,int num){
    if(!root) return;
    num=10*num+root->data;
    if(!root->left && !root->right) sum+=num;
    toNum(root->left,num);
    toNum(root->right,num);
}
int sumNumbers(node* root) {
    toNum(root,0);
    return sum;
}
node* insertNode(node *root,int key){
    if(!root) return new node(key);
    if(root->data>key) root->left=insertNode(root->left,key); 
    else root->right=insertNode(root->right,key);
    return root;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n];
    node *root=NULL;
    for(int i=0;i<n;i++){
        cin>>a[i];
        root=insertNode(root,a[i]);
    }
    cout << sumNumbers(root);
    return 0;
}