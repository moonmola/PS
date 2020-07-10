//
// 1699.cpp
// coding
//
// Created by mooninzoo on 2020-06-04.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 力蚌荐狼 钦
 * 贾风记 好
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dp[100000]={0,};
    for(int i = 1; i <= n;i++){
        dp[i] = i;
        for(int j = 1; j*j <= i; j++){
            dp[i] = min(dp[i],dp[i-j*j]+1);
        }
    }
    cout << dp[n] << endl;
}

