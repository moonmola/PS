// PS 1697.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/20/20
/*
 * 숨바꼭질
 */
#include <iostream>
#include <queue>
using namespace std;
int visit[100001];

int main(){
    int n,k;
    cin >> n >> k;
    queue<int> q;
    q.push(n);
    while (!q.empty()){
        int curr = q.front();
        if (curr == k) break;
        q.pop();
        if(curr+1<=100000 && visit[curr+1]==0) {
            q.push(curr + 1);
            visit[curr+1] = visit[curr]+1;
        }
        if(curr-1>=0 && visit[curr-1]==0) {
            q.push(curr - 1);
            visit[curr-1] = visit[curr]+1;
        }
        if(curr*2<=100000 && visit[curr*2]==0) {
            q.push(curr * 2);
            visit[curr*2] = visit[curr]+1;
        }
    }
    cout << visit[k];
}

