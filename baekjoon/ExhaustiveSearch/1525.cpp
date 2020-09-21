// PS 1525.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/20/20
/*
 * 퍼즐
 * RETRY
 */
#include <iostream>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;
const int TARGET = 123456789;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int start = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int num;
            cin >>num;
            if(num==0)
                num=9;
            start = start *10+num;
        }
    }
    queue<int> q;
    map<int,int> visited;
    q.push(start);
    visited[start] = 0;
    while (!q.empty()){
        int curr = q.front();
        string s = to_string(curr);
        q.pop();

        if(curr == TARGET)
            break;
        int z= s.find('9');//9의 위치가 비어있는 칸
        int x = z%3;
        int y = z/3;

        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx <0||nx >=3 || ny <0 || ny >=3)    continue;
            string temp = s;
            swap(temp[y*3+x], temp[ny*3 + nx]);

            int next = stoi(temp);
            if(!visited.count(next)){
                visited[next] = visited[curr]+1;
                q.push(next);
            }

        }
    }
    if(!visited.count(TARGET))
        cout << -1 << '\n';
    else
        cout << visited[TARGET] << '\n';

}