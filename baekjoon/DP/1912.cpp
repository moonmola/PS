//
// 1912.cpp
// PS
//
// Created by mooninzoo on 2020-06-03.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 연속합
 */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,ans=-1e9;
    cin >>n;
    vector<int> v(n);
    vector<int> dp(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++){
        dp[i] = max(v[i],dp[i-1]+v[i]);
        ans = max(ans, dp[i]);
    }
    cout << v[-5] << endl;
}