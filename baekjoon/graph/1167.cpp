//
// 1167.cpp
// PS
//
// Created by mooninzoo on 9/5/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 트리의 지름
 * *주의*
 * 아무 점(v)에서 시작해서 가장 먼 점(v1)을 찾고,
 * 그 점(v1)에서 가장 먼 점(v2)를 찾으면,
 * v1과 v2 사이의 거리가 트리의 지름이된다!
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
vector<pair<int,int>> graph[100001];
int visit[100001];
bool visited[100001];
int farthest_point;
void dfs(pair<int,int> x){
    visited[x.first]=1;
    for(auto elem:graph[x.first]){
        if(!visited[elem.first]){
            visit[elem.first]=visit[x.first]+elem.second;
            if(visit[farthest_point]<visit[elem.first]) {
                farthest_point = elem.first;
            }
            dfs(elem);
        }
    }
}

int main(){
    int v;
    cin >> v;
    for(int i = 1; i <= v; i++){
        int temp1;
        cin >> temp1;
        while(1){
            int temp2,dist;
            cin >> temp2;
            if(temp2==-1)
                break;
            cin>>dist;
            graph[temp1].push_back({temp2,dist});
        }
    }
    dfs({1,0});
    memset(visit,0,sizeof(visit));
    memset(visited,0,sizeof(visited));

    dfs({farthest_point,0});
    cout << visit[farthest_point];
}

