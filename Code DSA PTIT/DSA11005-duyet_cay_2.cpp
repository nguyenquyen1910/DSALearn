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
node *buildTree(int n,int *inorder,int iS,int iE,int *levelOrder){
    if(n > 0){
        node* root=new node(levelOrder[0]);
        int idx = -1;
        unordered_map<int, int> m;
        for(int i=iS;i<=iE;++i){
            if(inorder[i]==levelOrder[0]){
                idx=i;
                break;
            }
            ++m[inorder[i]];
        }
        int L[m.size()],R[iE-iS-m.size()],l=0,r=0;
        for(int i=1;i<n;++i){
            if(m[levelOrder[i]])
                L[l++]=levelOrder[i];
            else
                R[r++]=levelOrder[i];
        }
        root->left=buildTree(idx-iS,inorder,iS,idx-1,L);
        root->right=buildTree(iE-idx,inorder,idx+1,iE,R);
        return root;
    }
    return NULL;
}
void postorder(node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
void testCase(){
    int n;cin>>n;
    int inorder[n];
    int levelorder[n];
    for(int i=0;i<n;i++) cin>>inorder[i];
    for(int i=0;i<n;i++) cin>>levelorder[i];
    postorder(buildTree(n,inorder,0,n-1,levelorder));
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