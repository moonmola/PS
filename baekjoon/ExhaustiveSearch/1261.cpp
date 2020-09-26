// PS 1261.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/25/20
/*
 * 알고스팟
 * 풀었는데 다른사람은 0ms 나오는데 나는 4ms 나온다
 * 검색해보니 다익스트라 써야된다는데 일단 넘어간다
 */
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
bool a[100][100];
int visit[100][100];
int dx[4] = {1,-1, 0, 0};
int dy[4] = {0, 0,1, -1};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> m >> n;
    for(int i = 0; i <n ; i++){
        string temp;
        cin >> temp;
        for(int j = 0; j < m; j++){
            if(temp[j]-'0')  a[i][j] = true;
        }
    }

    memset(visit,-1,sizeof(visit));
    queue<pair<int,int>> q;
    q.push({0,0});
    visit[0][0]=0;
    int ans = 1e9;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(x==n-1 && y == m-1)  ans = min(ans,visit[x][y]);
        for(int i = 0; i < 4;i++){
            int nx = x+dx[i];
            int ny = y + dy[i];
            if(nx <0 || ny <0 || nx>=n || ny>=m )    continue;

            if (!a[nx][ny]) {
                if (visit[nx][ny] > visit[x][y] || visit[nx][ny] == -1) {
                    q.push({nx, ny});
                    visit[nx][ny] = visit[x][y];
                }
            } else {
                if (visit[nx][ny] > visit[x][y] + 1 || visit[nx][ny] == -1) {
                    q.push({nx, ny});
                    visit[nx][ny] = visit[x][y] + 1;
                }
            }

        }
    }

    cout << ans;




}