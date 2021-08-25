//
// 1707.cpp
// PS
//
// Created by mooninzoo on 8/31/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 이분 그래프
 * RETRY
 * 모든 변이 색1와 색2 꼭짓점을 포함하도록 색칠할 수 있는 그래프
 */
#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#define red 1
#define blue 2
using namespace std;
int main(){
    int T;
    cin >> T;
    int v,e;
    int visit[200001]={0};
    for(int t = 0 ;t<T; t++) {
        cin >> v >> e;
        vector<int> vec[v+1];
        for(int i = 0; i < e; i++)  {
            int temp1,temp2;
            cin >> temp1 >> temp2;
            vec[temp1].push_back(temp2);
            vec[temp2].push_back(temp1);
        }
        queue<int> q;
        bool flag = false;
        for(int i = 1; i <= v; i++){
            if(!visit[i]) {
                q.push(i);
                visit[i] = red;
            }
            while(!q.empty()) {
                int curr= q.front();
                q.pop();
                for(auto elem: vec[curr]) {
                    if(visit[elem]) {
                        if(visit[elem]==visit[curr]){
                            flag = true;
                            break;
                        }
                        continue;
                    }
                    if (visit[curr]==red) {
                        q.push(elem);
                        visit[elem]=blue;
                    }
                    else {
                        q.push(elem);
                        visit[elem]=red;
                    }
                }
                if(flag)    break;
            }
            if(flag)    break;
        }
        if(flag)    cout<< "NO" << '\n';
        else        cout << "YES" << '\n';
        memset(visit,0,sizeof(visit));
    }
}






/* 인터넷 반례들 다 넣어봤는데 맞다고 나온다
 * 근데 틀림 뭐야 왜저래
int V,E;
vector<int> a[20001];
bool visit[20001];
int colors[20001];
bool checker;

void dfs(int x){
    if(!colors[x])  colors[x]=1;
    for(int i = 0; i<a[x].size(); i++){
        int next = a[x][i];

        if(!colors[next]){
            if(colors[x]==1) colors[next]=2;
            else colors[next]=1;
        }
        else{
            if(colors[x]==colors[next])
                checker = false;
        }

        a[x].erase(a[x].begin()+i);
        a[next].erase(find(a[next].begin(),a[next].end(),x));
        i--;
        dfs(next);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int K;
    cin >> K;
    for(int i = 0; i <K; i++) {
        memset(colors,0,sizeof(visit));

        cin >> V >> E;
        for (int j = 0; j < E; j++) {
            int temp1, temp2;
            cin >> temp1 >> temp2;
            a[temp1].push_back(temp2);
            a[temp2].push_back(temp1);
        }
        for (int j = 1; j <= V; j++)
            sort(a[j].begin(), a[j].end());

        bool flag = false;
        vector<bool> result;
        while(!flag){
            for(int j = 1; j <=V; j++){
                if(!colors[j]){
                    checker = true;
                    dfs(j);
                    result.push_back(checker);
                    break;
                }
                if(V==j)    flag = true;
            }
        }
        for(int j = 0; j < result.size(); j++){
            if(!result[j]){
                cout << "NO"<<'\n';
                break;
            }
            if(j == result.size()-1)
                cout << "YES" << '\n';
        }
//        for(auto elem : a) elem.clear();
//        *WARNING* vector<int>에서 int는 소멸자가 없기때문에 clear에서 아무것도 수행되지 않는다

        for(auto & j : a)
            j.erase(j.begin(),j.end());

        memset(colors,0,sizeof(visit));

    }
}
 */


