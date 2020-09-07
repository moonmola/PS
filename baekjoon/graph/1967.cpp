//
// 1967.cpp
// PS
//
// Created by mooninzoo on 9/5/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 트리의 지름
 */

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector<pair<int,int>> graph[10001];
bool visit[10001];
int dist[10001];
void dfs(int num){
    visit[num]=1;
    for(auto elem: graph[num]){
        if(!visit[elem.first]){
            dist[elem.first] = dist[num]+elem.second;
            dfs(elem.first);
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <n; i++){
        int parr,child,weight;
        cin >> parr >> child >> weight;
        graph[parr].push_back({child,weight});
        graph[child].push_back({parr,weight});
    }
    dfs(1);
    int answer = 0;
    int point = 0;
    for(int i = 1; i <= n ;i++){
        if(answer <dist[i]) {
            answer = dist[i];
            point = i;
        }
    }
    memset(visit,0,sizeof(visit));
    memset(dist,0,sizeof(dist));
    dfs(point);
    answer = 0;
    for(int i = 1; i <= n ;i++){
        if(answer <dist[i]) {
            answer = dist[i];
        }
    }
    cout << answer << '\n';
    return 0;
}
