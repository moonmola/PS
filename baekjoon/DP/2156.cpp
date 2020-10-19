// 2156.cpp
// PS
// Created by mooninzoo on 2020-05-28.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 포도주 시식
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
    for(int i = 0; i < n; i++) cin >> v[i];
    dp[0] = v[0];
    dp[1] = v[1]+dp[0];
    dp[2] = max({v[2]+v[1],v[2]+dp[0],dp[1]});
    for(int i=3; i<n; i++){
        dp[i]= max({v[i]+dp[i-2],v[i]+v[i-1]+dp[i-3],dp[i-1]});
    }
    cout << dp[n-1];
}