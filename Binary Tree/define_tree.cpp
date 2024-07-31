#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct node{
    int data;
    node *left;
    node *right;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    node *node1=new node();
    node1->data=1;
    node1->left=node1->right=NULL;
    node *node2=new node();
    node2->data=2;
    node2->left=node2->right=NULL;
    node *node3=new node();
    node3->data=3;
    node3->left=node3->right=NULL;
    node1->left=node2;
    node1->right=node3;
    node *node100=new node();
    node100->data=100;
    node100->left=node100->right=NULL;
    node2->left=node100;
    cout << node1->left->left->data;
    return 0;
}