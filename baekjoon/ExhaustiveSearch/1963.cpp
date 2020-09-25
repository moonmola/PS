// PS 1963.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/20/20
/*
 * 소수 경로
 * RETRY
 * 에라토스뭐시기의 채 기억하기!
 */
#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
int visit[10001];

int main(){
    int T;
    int start,end;
    bool arr[10010];
    for(int i = 2; i <10000; i++)    arr[i] = true;
    for(int i = 2; i < 10000; i++){
        for(int j = 2; i*j <10000; j++){
            arr[i*j] = false;
        }
    }
    cin >> T;
    for(int t = 0; t < T;t++){
        memset(visit,0,sizeof(visit));
        cin >> start >> end;
        queue<int> q;
        q.push(start);
        visit[start]=1;
        while (!q.empty()){
            int curr = q.front();
            q.pop();
            if(curr == end)    break;
            for(int i = 0; i < 4; i++){
                int next;
                for(int j = 0; j < 10; j++){
                    string s = to_string(curr);
                    s[i] = j+'0';
                    next = stoi(s);
                    if (visit[next])    continue;
                    if (!arr[next])     continue;
                    if (next >=10000 || next <1000) continue;
                    visit[next]=visit[curr]+1;
                    q.push(next);
                }
            }
        }
        if(visit[end])cout << visit[end]-1 << '\n';
        else cout << "Impossible" << '\n';
    }
}
