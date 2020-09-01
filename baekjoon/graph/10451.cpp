//
// 10451.cpp
// PS
//
// Created by mooninzoo on 8/31/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 순열 사이클
 */
#include <iostream>
#include <vector>
using namespace std;
void dfs(vector<int> graph[],bool visit[] ,int start){
    for(int i = 0; i < graph[start].size(); i++){
        int next = graph[start][i];
        if(!visit[next]) {
            visit[next] = 1;
            dfs(graph, visit, next);
        }
    }
}
int main(){
    int T, N;
    cin >> T;
    while(T>0){
        cin >> N;
        vector<int> graph[1001];
        bool visit[1001]={0,};
        for(int j = 1; j <= N; j++){
            int temp;
            cin >> temp;
            graph[temp].push_back(j);
            graph[j].push_back(temp);
        }
        int result = 0;
        for(int j = 1; j <=N; j++){
            if(!visit[j]) {
                visit[j] = 1;
                dfs(graph, visit, j);
                result++;
            }
        }
        cout << result << '\n';
        T--;
    }
}

