// PS 5014.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/23/20
/*
 * 스타트링크
 */
#include <iostream>
#include <queue>
using namespace std;
int visit[1000001];
int main(){
    int f,s,g,u,d;
    cin >> f >> s >> g >> u >> d;
    queue<int> q;
    q.push(s);
    visit[s] = 1;
    bool flag = false;
    while (!q.empty()){
        int curr = q.front();
        q.pop();
        if(curr == g){
            flag = true;
            cout << visit[curr]-1;
            break;
        }
        int nu = curr+u;
        int nd = curr-d;
        if(!(nu>f || visit[nu])) {
            q.push(nu);
            visit[nu] = visit[curr] + 1;
        }
        if(!(nd <1 || visit[nd])) {
            q.push(nd);
            visit[nd] = visit[curr] + 1;
        }

    }
    if(!flag)   cout << "use the stairs";


}


