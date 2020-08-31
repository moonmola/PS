//
// 1260.cpp
// PS
//
// Created by mooninzoo on 8/31/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * DFS와 BFS
 * RETRY
 *
 * BFS가 DFS보다 속도가 빠름
 */

#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

int n, m, start;
vector<int> a[1001];
bool visit[1001];

void dfs(int x){
    visit[x] = true;
    cout << x << ' ';
    for(int i = 0; i < a[x].size(); i++){
        int next = a[x][i];
        if(visit[next]) continue;
        dfs(next);
    }
}
void bfs(int x){
    memset(visit,0,sizeof(visit));
    queue<int> q;
    q.push(x);
    visit[x] = true;
    while(!q.empty()){
        int curr = q.front();
        cout << curr << ' ';
        q.pop();
        for (int i = 0; i < a[curr].size(); ++i) {
            int next = a[curr][i];
            if(visit[next])     continue;
            q.push(next);
            visit[next]=true;
        }
    }
}
int main(){
    cin >> n >>m >> start;
    for(int i = 0; i < m; i++){
        int temp1,temp2;
        cin >> temp1 >> temp2;
        a[temp1].push_back(temp2);
        a[temp2].push_back(temp1);
    }
    for(int i = 1; i<=n ;i++)
        sort(a[i].begin(),a[i].end());
    dfs(start);
    cout <<'\n';
    bfs(start);
    return 0;
}






/*

#define MAX 1001 // 1<=N<=1000이라서 1001로 max

int n, m, start;
int matrix[MAX][MAX]; // 인접행렬의 값을 받기 위한 행렬
int visit[MAX]; // 방문했던 것을 체크하기 위한 플래그 배열
// dfs:방문1, 미방문0    bfs:반대로 사용-dfs가 끝나면 전부 1일테니까

void dfs(int start);
void bfs(int start);

int main(){
    cin >> n >> m >> start;
    int x,y;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        matrix[x][y]=matrix[y][x] = 1;
    }
    dfs(start);
    cout << '\n';
    bfs(start);
    return 0;

}
void dfs(int start){
    cout << start << ' ';
    visit[start] = 1; // 방문하였으므로 방문체크
    for(int i = 1; i <=n; i++){
//        정점의 갯수대로 반복문을 돌면서 방문을 했거나
//        인접행렬에 0이 있으면 지나고 dfs(i)재귀
        if(visit[i]==1||matrix[start][i]==0)    continue;
        dfs(i);
    }
}
void bfs(int start){
    queue<int> q;
    q.push(start); //첫 번째 정점 queue에 push
    visit[start] = 0; // dfs에서 사용한 visit배열을 반대로 사용하면 된다.
    while(!q.empty()) {//queue가 빌 때까지 while 문
        start = q.front();
        cout << start << ' ';
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (matrix[start][i] == 0 || visit[i] == 0) continue;
            q.push(i);
            visit[i] = 0;
        }
    }
}
 */