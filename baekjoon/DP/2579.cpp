//
// 2579.cpp
// PS
//
// Created by mooninzoo on 2020-06-03.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 계단오르기
 * RETRY
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> dp(n);
    for(auto& i:v)  cin >> i;
    dp[0]=v[0];
    dp[1]=v[0]+v[1];
    dp[2]=max(dp[0] + v[2], v[1] + v[2]);
    for(int i = 3; i <n; i++){
        dp[i] = max(dp[i-2]+v[i],dp[i-3]+v[i-1]+v[i]);
    }
    cout << dp[n-1]<<'\n';
}
