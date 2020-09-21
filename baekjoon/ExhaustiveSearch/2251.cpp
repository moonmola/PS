// PS 2251.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/20/20
/*
 * 물통
 * RETRY
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int A,B,C;
struct data{
    int a, b, c;
};
int main(){
    cin >> A >> B >> C;
    bool visit[201][201][201];
    queue<data> q;
    q.push({0,0,C});
    vector<int> ans;
    while (!q.empty()){
        int a = q.front().a;
        int b = q.front().b;
        int c = q.front().c;
        q.pop();

        if(visit[a][b][c])  continue;

        visit[a][b][c] = true;
        if(!a)
            ans.push_back(c);

        if(a+b> B)  q.push({a+b-B, B, c});
        else    q.push({0,a+b,c});
        if(a+c>C)   q.push({A,b+a-A, c});
        else    q.push({b+a,0,c});
        if (b+a>A)  q.push({A, b + a - A,c});
        else    q.push({b+a,0,c});
        if(b+c>C)   q.push({a,b+c-C,C});
        else    q.push({a,0,b+c});
        if(c+a>A)   q.push({A,b,a+c-A});
        else    q.push({a + c, b, 0});
        if(c+b>B)   q.push({a,B,c+b-B});
        else    q.push({a,b+c,0});
    }
    sort(ans.begin(),ans.end());
    for(auto i : ans)   cout << i << ' ';
}