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
#include <algorithm>
#include <queue>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int n;
        cin >> n;
        vector<int> v[n+1];
        vector<bool> visit(n+1);
        int temp;
        for(int i = 1; i <= n;i++){
            cin >>temp;
            v[i].push_back(temp);
        }
        queue<int> q;
        int ans = 0;
        for(int i = 1; i <= n;i++){
            if(!visit[i]){
                visit[i] = 1;
                q.push(i);
            }
            while (!q.empty()){
                int curr= q.front();
                q.pop();
                int next= v[curr][0];
                if(visit[next]) {
                    ans++;
                    continue;
                }
                visit[next]=1;
                q.push(next);
            }
        }
        cout << ans << '\n';

    }
}




//#include <iostream>
//#include <vector>
//using namespace std;
//void dfs(vector<int> graph[],bool visit[] ,int start){
//    for(int i = 0; i < graph[start].size(); i++){
//        int next = graph[start][i];
//        if(!visit[next]) {
//            visit[next] = 1;
//            dfs(graph, visit, next);
//        }
//    }
//}
//int main(){
//    int T, N;
//    cin >> T;
//    while(T>0){
//        cin >> N;
//        vector<int> graph[1001];
//        bool visit[1001]={0,};
//        for(int j = 1; j <= N; j++){
//            int temp;
//            cin >> temp;
//            graph[temp].push_back(j);
//            graph[j].push_back(temp);
//        }
//        int result = 0;
//        for(int j = 1; j <=N; j++){
//            if(!visit[j]) {
//                visit[j] = 1;
//                dfs(graph, visit, j);
//                result++;
//            }
//        }
//        cout << result << '\n';
//        T--;
//    }
//}
//
