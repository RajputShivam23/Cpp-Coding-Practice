#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node (int val){
        data = val;
        left=right=nullptr;
    }
};
int main(){
    struct Node*root = new Node(5);
    root ->left= new Node(2);
    root->right=new Node(6);
    root->right->right= new Node(25);
}