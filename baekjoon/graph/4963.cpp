//
// 4963.cpp
// PS
//
// Created by mooninzoo on 9/3/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 섬의 개수
 * RETRY
 */

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
int w, h;
vector<bool> graph[50];
bool visit[50][50];
void dfs(int x, int y){
    if(x<0||y<0||x>=h||y>=w)    return;
    if(visit[x][y]||!graph[x][y]){
        visit[x][y]=1;
        return;
    }
    visit[x][y]=1;
    dfs(x+1,y);
    dfs(x+1,y+1);
    dfs(x,y+1);
    dfs(x-1,y+1);
    dfs(x-1,y);
    dfs(x-1,y-1);
    dfs(x,y-1);
    dfs(x+1,y-1);

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(1) {
        cin >> w >> h;
        if(!w&&!h)
            break;
        for (int i = 0; i < h; i++)
            for (int j = 0; j < w; j++) {
                int n;
                cin >> n;
                graph[i].push_back(n);
            }
        int isle=0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++){
                if(!visit[i][j]&&graph[i][j]){
                    dfs(i,j);
                    isle++;
                }
            }
        }
        cout << isle <<'\n';
        for(auto& elem:graph)
            elem.erase(elem.begin(),elem.end());
        memset(visit,0,sizeof(visit));

    }
    return 0;

}


