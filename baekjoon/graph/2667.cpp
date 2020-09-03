//
// 2667.cpp
// PS
//
// Created by mooninzoo on 9/3/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 단지번호붙이기
 * BFS로 풀었음
 * DFS로 하면 엄청 짧아진다 해보기(밑에 답)
 */
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    int n; // 지도의 크기
    cin >> n;
    string graph1[n];
    int visit[26][26] = {0};
    int direction[4][2] = {{1,0},
                           {0,-1},
                           {-1,0},
                           {0,1}
    };
    for(int i = 0 ; i < n; i++){
        cin >> graph1[i];
    }
    vector<int> result;
    for(int i = 0; i<n;i++){
        for(int j = 0; j < n; j++){
            queue<pair<int,int>> q;
            int result_temp = 0;
            if((graph1[i][j]-'0')&&!visit[i][j]){
                visit[i][j]=1;
                result_temp++;
                q.push(make_pair(i,j));
                while (!q.empty()) {
                    pair<int,int> curr = q.front();
                    q.pop();
                    for (int k = 0; k < 4; k++) {
                        int nextX = curr.first + direction[k][0];
                        int nextY = curr.second + direction[k][1];
                        if(nextX>=n||nextY>=n||nextX<0||nextY<0)
                            continue;
                        if ((graph1[nextX][nextY]-'0') && !visit[nextX][nextY]) {
                            q.push(make_pair(nextX,nextY));
                            visit[nextX][nextY] = 1;
                            result_temp++;

                        }
                    }
                }
            }
            if(result_temp)
                result.push_back(result_temp);
        }
    }
    sort(result.begin(),result.end());
    cout << result.size()<<'\n';
    for(auto elem:result)
        cout << elem <<'\n';
    return 0;
}
/*
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<string> v;
bool c[25][25];
int cnt, N;
void dfs(int x, int y){
    if(x < 0 || y <0 || x >= N || y >= N) return;
    if(v[x][y] == '0' || c[x][y]){
        c[x][y] = true;
        return;
    }
    cnt++;
    c[x][y] = true;
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}

int main(){
    int num = 0;
    string s;
    vector<int> ans;
    cin>>N;
    for(int i = 0; i < N; i++){
        cin>>s;
        v.push_back(s);
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cnt = 0;
            dfs(i, j);
            if(cnt != 0){
                num++;
                ans.push_back(cnt);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout<<num<<'\n';
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<'\n';
    }
    return 0;
}
 */
