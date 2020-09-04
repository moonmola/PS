//
// 7576.cpp
// PS
//
// Created by mooninzoo on 9/3/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 토마토
 * RETRY!!!
 */
#include<iostream>
#include<queue>
using namespace std;
struct data{int x,y;};
int arr[1001][1001];
int check[1001][1001];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int cnt,m,n;
queue<data> q;
int main(void)
{
    cin >> m >> n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
            check[i][j]=-1;

            if(arr[i][j]==1) {
                q.push({i,j});
                check[i][j]=0;
            }
        }
    }

    while(!q.empty()) {
        int x=q.front().x;
        int y=q.front().y;
        q.pop();

        for(int k=0; k<4; k++) {
            int nx=x+dx[k];
            int ny=y+dy[k];
            if (0<=nx && nx<n && 0<=ny && ny<m) {
                if(arr[nx][ny]==0 && check[nx][ny]==-1) {
                    check[nx][ny]=check[x][y]+1;
                    q.push({nx,ny});
                }
            }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if(cnt<check[i][j])
                cnt=check[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j]==0 && check[i][j]==-1)
                cnt=-1;
        }
    }

    cout << cnt;

    return 0;
}


/* 테스트케이스는 맞게 나오는데
 * 어디가 틀린걸까?
 * 정말 모르겠다~~~
#include <iostream>
#include <queue>
using namespace std;
int m,n;
int graph[1001][1001];
bool visit[1001][1001];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
queue<pair<int,int>> q;

void dfs(int x, int y){
    if(x<0||y<0||x>=n||y>=m)    return;//판을 넘어가면 그만
    if(graph[x][y]!=1||visit[x][y])  return;//0이거나 -1이거나 이미 방문했으면 그만
    //위에서 걸러짐 : 1이고 방문하지 않은것
    visit[x][y] = 1;
    for(int i = 0; i < 4; i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0||ny<0||nx>=n||ny>=m)    continue;
        if(graph[nx][ny]==0) {
            //1이고 인접한것이 0일때 인접한것을 큐에 넣는다
            q.push(make_pair(nx, ny));
        }
    }
}
int main(){
    cin >> m >> n;
    for(int i = 0; i < n; i ++)
        for(int j = 0; j <m; j++)
            cin >> graph[i][j];

    for(int i = 0; i < n; i ++){
        for(int j = 0; j <m; j++){
            if(graph[i][j]==1&&!visit[i][j]){
                dfs(i,j);
            }
        }
    }//첫번째날 익어야하는것을 q에 넣는다
    int index = q.size();
    int answer = 0;
    while(!q.empty()) {//q가 empty가 아닐때
        while (index) {//하루당 담겨있는 q만큼 반복
            pair<int, int> curr = q.front();
            q.pop();
            cout << curr.first << '-' << curr.second <<'\n';
            graph[curr.first][curr.second]=1;
            dfs(curr.first,curr.second);
            index--;
        }
        cout << "---------"<<'\n';
        index = q.size();//새로 담긴 큐의 사이즈(다음날 익어야하는것들)
        answer++;//하루끝
    }
    int check = 0;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j <m; j++){
            if(graph[i][j]==0){
                cout << -1;
                return 0;
            }
            else if(graph[i][j]==-1){
                check++;
            }
        }
    }
    if(check== n*m){
        cout << -1;
        return 0;
    }
    cout << answer;
    return 0;
}
 */
