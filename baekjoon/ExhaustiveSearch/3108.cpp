// PS 3108.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/21/20
/*
 * 로고
 */
#include <iostream>
using namespace std;
bool graph[2001][2001];
bool visit[2001][2001];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
void dfs(int x, int y){
    if(x<0||y<0|| x>2000|| y>2000||!graph[x][y]||visit[x][y])  return;
    visit[x][y] = true;
    for(int i = 0; i < 4; i++){
        int nx = x+ dx[i];
        int ny = y+ dy[i];
        dfs(nx,ny);
    }
}

int main(){
    int N;
    cin >> N;
    int x1,y1, x2,y2;
    for(int n = 0; n < N; n++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 = (x1+500) *2;
        y1 = (y1+500) *2;
        x2 = (x2+500) *2;
        y2 = (y2+500) *2;

        for(int i = x1; i<=x2; i++) {graph[y1][i]=1;    graph[y2][i]=1;}
        for(int i = y1; i <= y2; i++){graph[i][x1]=1;    graph[i][x2]=1;}

    }
    int ans = 0;
    if(graph[1000][1000])    ans--;
    for(int i = 0; i < 2001; i++){
        for(int j = 0; j <2001; j ++){
            if(!visit[i][j] &&graph[i][j]){
                dfs(i,j);
                ans++;
            }
        }
    }
    cout << ans;

}