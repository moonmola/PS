// PS 9019.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/20/20
/*
 * DSLR
 * RETRY
 */
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int D(int num){
    num = num*2;
    if (num >9999)   num = num%10000;
    return num;
}
int S(int num){
    if(num==0)  num = 9999;
    else num = num-1;
    return num;
}
int L(int num){
    return (num%1000) * 10 + num/1000;
}
int R(int num){
    return (num%10)*1000 + num/10;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    int start,end;
    for(int t = 0; t < T; t++){
        cin >> start >> end;
        queue<int> q;
        string visit[10001];
        q.push(start);
        while (!q.empty()) {
            int curr = q.front();
            if(curr == end)
                break;
            q.pop();
            if (visit[D(curr)].empty()&&curr!=0) {
                q.push(D(curr));
                visit[D(curr)] = visit[curr] + 'D';
            }
            if (visit[S(curr)].empty()) {
                q.push(S(curr));
                visit[S(curr)] = visit[curr] + 'S';
            }
            if (visit[L(curr)].empty()) {
                q.push(L(curr));
                visit[L(curr)] = visit[curr] + 'L';
            }
            if (visit[R(curr)].empty()) {
                q.push(R(curr));
                visit[R(curr)] = visit[curr] + 'R';
            }
        }
        cout << visit[end] << '\n';
    }
}

