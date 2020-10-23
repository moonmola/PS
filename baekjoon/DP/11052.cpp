//
// 11052.cpp
// coding
//
// Created by mooninzoo on 2020-06-07.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 카드 구매하기
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i = 1; i <=n; i++)  cin >> v[i];
    vector<int> dp(n+1);
    dp[1]=v[1];
    for(int i = 2; i <=n; i++){
        dp[i] = v[i];
        for(int j = 1;j<i;j++){
            dp[i] = max(dp[i],dp[i-j]+v[j]);
        }
    }
    cout << dp[n];
}