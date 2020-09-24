// PS 1987.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/24/20
/*
 * 알파벳
 * RETRY
 */
#include <iostream>
#include <algorithm>
using namespace std;
int r, c;
char board[21][21];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int ans;
bool visit[26];
void dfs(int x, int y, int cnt){
    ans = max(ans,cnt);
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx<0 || ny<0 || nx >=r || ny>=c)    continue;
        if(!visit[board[nx][ny]-'A']){
            visit[board[nx][ny]-'A'] = true;
            dfs(nx,ny,cnt+1);
            visit[board[nx][ny]-'A'] = false;
        }
    }
}
int main(){
    cin >> r >> c;
    for(int i = 0 ;i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> board[i][j];
        }
    }
    ans = 0;
    visit[board[0][0]-'A']=true;
    dfs(0,0,1);
    cout << ans;

}

