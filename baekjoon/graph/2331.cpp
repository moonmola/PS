//
// 2331.cpp
// PS
//
// Created by mooninzoo on 9/1/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 반복수열
 * RETRY
 */

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int P;
int visit[1000001];
vector<int> a;
void dfs(int num){
    visit[num]++;
    a.push_back(num);
    if(visit[num]==2)
        return;
    int next = 0;
    for(auto elem : to_string(num))
        next+=pow(elem-'0',P);
    dfs(next);
}
int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int A;
    cin >> A >> P;ㅐ
    dfs(A);
    int result=0;
    for(auto elem:a){
        if(elem == a[a.size()-1])
            break;
        result++;
    }
    cout << result<<'\n';

}

