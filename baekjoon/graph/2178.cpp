//
// 2178.cpp
// PS
//
// Created by mooninzoo on 9/4/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 미로탐색
 * *중요*로컬변수로 선언할때는 초기화!!!하기
 */

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    int n, m;
    int dx[4] = {1,-1, 0, 0};
    int dy[4] = {0, 0, 1,-1};
    cin >> n >> m;
    int visit[101][101]={0};
    vector<string> graph(n);
    for(int i = 0; i < n; i++){
        cin >> graph[i];
    }
    queue<pair<int, int>> q;
    visit[0][0] = 1;
    q.push({0, 0});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx<0||ny<0||nx>=n||ny>=m)    continue;
            if(graph[nx][ny]=='1'&&!visit[nx][ny]) {
                visit[nx][ny] = visit[x][y]+1;
                q.push({nx, ny});
            }
        }
    }
    cout << visit[n-1][m-1];

}

