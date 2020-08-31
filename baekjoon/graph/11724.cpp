//
// 11724.cpp
// PS
//
// Created by mooninzoo on 8/31/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 연결 요소의 개수
 *
 */

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
vector<int> a[1001];
bool visit[1001];

void dfs(int x){
    visit[x] = 1;
    for(int i = 0; i < a[x].size(); i++){
        int next = a[x][i];
        if(visit[next])     continue;
        dfs(next);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int temp1,temp2;
        cin >> temp1 >> temp2;
        a[temp1].push_back(temp2);
        a[temp2].push_back(temp1);
    }
    for(int i = 1; i <=n; i++)
        sort(a[i].begin(),a[i].end());
    bool flag = false;
    int result = 0;
    while(!flag){
        int cur;
        for(int i = 1; i <=n; i++){
            if(!visit[i]){
                cur = i;
                dfs(cur);
                result++;
                break;
            }
            if(i==n)    flag=1;
        }
    }
    cout << result;
    return 0;

}

