//
// 9466.cpp
// PS
//
// Created by mooninzoo on 9/2/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 텀 프로젝트
 * RETRY
 * 한뱡향 원이거나 자기자신을 택할 때 제외
 */

#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 100001
using namespace std;
int graph[MAX];
bool visit[MAX];
bool done[MAX];
int n,cnt;

void dfs(int num){
    visit[num]++;
    int next = graph[num];
    if(!visit[next])
        dfs(next);
    else if(!done[next]){
        for(int i = next; i!=num; i=graph[i])
            cnt++;
        cnt++;
    }
    done[num] = true;
}

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int T;
    cin >>T;
    for(int t = 0; t < T; t++){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> graph[i];
        }
        cnt = 0;
        for(int i = 1; i <=n;i++){
            if(!visit[i])
                dfs(i);
        }
        cout << n-cnt << endl;
        memset(visit,0,sizeof(visit));
        memset(done,0,sizeof(done));
    }



}

