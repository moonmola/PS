//
// 1991.cpp
// PS
//
// Created by mooninzoo on 9/5/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 트리 순회
 * RETRY
 */

#include <iostream>
using namespace std;
struct Node{
    char data;
    Node *left;
    Node *right;
};
Node *nodes;
void preorder_traverse(Node *R){
    cout << R->data;
    if(R->left)
        preorder_traverse(R->left);
    if(R->right)
        preorder_traverse(R->right);
}
void inorder_traverse(Node *R){
    if(R->left)
        inorder_traverse(R->left);
    cout << R->data;
    if(R->right)
        inorder_traverse(R->right);
}
void postorder_traverse(Node *R){
    if(R->left)
        postorder_traverse(R->left);
    if(R->right)
        postorder_traverse(R->right);
    cout << R->data;
}
int main(){
    int n, curr;
    cin >> n;
    char chr,nl,nr;
    nodes = new Node[n];
    for(int i = 0; i <n; i++){
        cin >> chr >> nl >> nr;
        curr = chr-'A';
        nodes[curr].data = chr;
        if(nl=='.')
            nodes[curr].left=NULL;
        else
            nodes[curr].left = &nodes[nl-'A'];
        if(nr=='.')
            nodes[curr].right=NULL;
        else
            nodes[curr].right = &nodes[nr-'A'];

    }
    preorder_traverse(&nodes[0]);
    cout << '\n';
    inorder_traverse(&nodes[0]);
    cout << '\n';
    postorder_traverse(&nodes[0]);
    delete nodes;
}
