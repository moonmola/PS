//
// 2225.cpp
// coding
//
// Created by mooninzoo on 2020-06-06.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 합분해
 * 표에서 점화식 찾긴 했는데 이해는 잘안감
 */

#include <iostream>
#define MOD 1000000000
using namespace std;

int main(){
    int n, k;
    cin >> n >>k;
    int dp[201][201];
    for(int i = 1; i <= max(n,k); i++){
        dp[1][i] = i;
        dp[i][1] = 1;
    }
    for(int i = 2 ;i <= n; i++){
        for(int j = 2; j<=k;j++){
            dp[i][j] = (dp[i-1][j] + dp[i][j-1])%MOD;
        }
    }
    cout << dp[n][k] << endl;
}