//
// 2146.cpp
// PS
//
// Created by mooninzoo on 9/4/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 다리만들기
 * RETRY
 * 맞긴맞았는데 초가 길어서 비효율적으로 풀었다
 * 그래도 한번에 맞긴했음
 *
 * 첫번째 접근한게 더 효율적이였는데 더 나아가는 방법을 몰랐네
 *
 * 첫번째 접근 : 모든 섬을 q에 넣어서 +1씩해서 퍼져나가게하는 방법
 * ->더 나아가 : array 하나 더 만들어서 +1할때 섬번호도 적어준다
 * ->밑에 첫번째 접근 정답코드 주석처리해놓았다
 *
 * 두번째 접근 :
 * 각 섬번호를 메인으로 하여 다른 섬번호까지 거리를 계산해서 가장 작은값도출
 * ->섬이 3개만 돼도 6번 계산해야함
 *
 */

#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
int v[101][101];
int graph2[101][101];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n;
int isle;
void dfs(int x, int y){
    if(x<0||y<0||x>=n||y>=n)    return;
    if(graph2[x][y]||!v[x][y])   return;
    graph2[x][y]=isle;
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        dfs(nx,ny);
    }
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> v[i][j];
    isle=1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <n ;j++){
            if(v[i][j]&&!graph2[i][j]){
                dfs(i,j);
                isle++;
            }
        }
    }
    queue<pair<int,int>> q[isle];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int t = 1; t<isle;t++){
                if(graph2[i][j]==t)
                    q[t].push({i,j});
            }
        }
    }
    vector<int> answer;

    for (int t = 1; t<isle; t++) {
        memset(v,0,sizeof(v));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(graph2[i][j]==t)
                    v[i][j]=1;
            }
        }
        int min = 1000000;
        while (!q[t].empty()) {
            int x = q[t].front().first;
            int y = q[t].front().second;
            q[t].pop();
            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
                if (!v[nx][ny]) {//next가 방문 안했을때
                    if (!graph2[nx][ny]) {//next가 바다이면
                        v[nx][ny] = v[x][y] + 1;
                        q[t].push({nx, ny});
                    } else {//next가 t가아닌 섬이면
                        if(min>v[x][y])
                            min = v[x][y];
                    }
                }
            }
        }
        answer.push_back(min-1);
    }
    cout << *min_element(answer.begin(),answer.end());
}
/*
#include <iostream>
#include <queue>

using namespace std;

int a[100][100];
int ch[100][100];
int len[100][100];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
int n = 0;


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            a[i][j] = num;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (ch[i][j] == 0 && a[i][j] == 1) {
                queue<pair<int, int>> myQ;
                myQ.push(make_pair(i, j));
                ch[i][j] = ++cnt;
                while (!myQ.empty()) {
                    int x = myQ.front().first;
                    int y = myQ.front().second;
                    myQ.pop();
                    for (int k = 0; k < 4; k++) {
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                            if (ch[nx][ny] == 0 && a[nx][ny] == 1) {
                                ch[nx][ny] = cnt;
                                myQ.push(make_pair(nx, ny));
                            }
                        }
                    }
                }
            }
        }
    }
    queue<pair<int, int>> myq;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            len[i][j] = -1;
            if (a[i][j] == 1) {
                myq.push(make_pair(i, j));
                len[i][j] = 0;
            }
        }
    }

    while (!myq.empty()) {
        int x = myq.front().first;
        int y = myq.front().second;
        myq.pop();

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                if (len[nx][ny] == -1) {
                    ch[nx][ny] = ch[x][y];
                    len[nx][ny] = len[x][y] + 1;
                    myq.push(make_pair(nx, ny));
                }
            }
        }
    }
    int ans = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 4; k++) {
                int nx = i + dx[k];
                int ny = j + dy[k];
                if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                    if (ch[i][j] != ch[nx][ny]) {
                        int length = len[i][j] + len[nx][ny];
                        if (ans == -1 || ans > length) {
                            ans = length;
                        }

                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}
 */

