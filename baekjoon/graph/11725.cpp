//
// 11725.cpp
// PS
//
// Created by mooninzoo on 9/5/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 트리의 부모 찾기
 * RETRY
 */

#include <iostream>
#include <vector>
#define MAX 100001
using namespace std;
vector<int> graph[MAX];
int visit[MAX];

void dfs(int x){
    for(int elem:graph[x]){
        if(!visit[elem]) {
            visit[elem]=x;
            dfs(elem);
        }
    }
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i < n; i++){
        int temp1,temp2;
        cin >> temp1 >> temp2;
        graph[temp1].push_back(temp2);
        graph[temp2].push_back(temp1);
    }
    visit[1]=1;
    dfs(1);
    for(int i = 2; i <= n; i++){
        cout << visit[i] <<'\n';
    }
}


/* 예제는 맞으나 틀렸음 :dfs,bfs써야함
#include <iostream>
using namespace std;
struct Node{
    int data{};//이게 뭐하는거고?
    Node* left;
    Node* right;
    Node():left(nullptr),right(nullptr){}
};
Node* nodes;

int main(){
    int n;
    int parr,child;
    cin >> n;
    nodes = new Node[n+1];
    for(int i = 1; i <=n;i++){
        nodes[i].data=i;
    }
    int* childed=new int[n+1]{0};
    childed[1] = 1;
    for(int i = 1; i < n ; i++){
        cin >> parr >> child;
        if(childed[child]==1){
            int temp = parr;
            parr = child;
            child = temp;
        }
        childed[child]=1;
        if(nodes[parr].left== nullptr)
            nodes[parr].left=&nodes[child];
        else if(nodes[parr].right== nullptr)
            nodes[parr].right=&nodes[child];
    }
    int nl,nr;
    int* result = new int[n+1]{0};
    for(int i = 1; i <=n ;i++){
        if(nodes[i].left) {
            nl = nodes[i].left->data;
            result[nl]=i;

        }
        if(nodes[i].right) {
            nr = nodes[i].right->data;
            result[nr] = i;
        }
    }
    for(int i = 2; i <= n; i++){
            cout << result[i] <<'\n';
    }
    delete [] result;
    delete [] nodes;
    delete [] childed;
}
 */
