//inorder,predorder->postorder
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
node *tryTree(vector<int> &preorder,int preStart,int preEnd,vector<int> &inorder,int inStart,int inEnd,map<int,int> &mp){
    if(preStart>preEnd || inStart>inEnd) return NULL;
    node *root=new node(preorder[preStart]);
    int elm=mp[root->data];
    int nElm=elm-inStart;
    root->left=tryTree(preorder,preStart+1,preStart+nElm,inorder,inStart,elm-1,mp);
    root->right=tryTree(preorder,preStart+nElm+1,preEnd,inorder,elm+1,inEnd,mp);
    return root;
}
node *builtTree(vector<int> &preorder,vector<int> &inorder){
    int preStart = 0, preEnd = preorder.size() - 1;
    int inStart = 0, inEnd = inorder.size() - 1;
    map < int, int > mp;
    for (int i = inStart; i <= inEnd; i++) {
        mp[inorder[i]] = i;
    }
    return tryTree(preorder, preStart, preEnd, inorder, inStart, inEnd, mp);
}
void postOrder(node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << ' ';
    }
}
void testCase(){
    int n;cin>>n;
    vector<int> inorder(n);
    vector<int> preorder(n);
    for(int i=0;i<n;i++){
        cin>>inorder[i];
    }
    for(int i=0;i<n;i++){
        cin>>preorder[i];
    }
    node *root=builtTree(preorder,inorder);
    postOrder(root);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
        cout<<endl;
    }
    return 0;
}