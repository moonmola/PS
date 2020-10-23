//
// 2225.cpp
// coding
//
// Created by mooninzoo on 2020-06-06.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 합분해
 * RETRY
 */
#include <iostream>
using namespace std;
#define mod 1000000000;
int main(){
    int n,k;
    cin >> n>> k;
    int dp[201][201]={0,};
    for(int i = 0; i < k; i++)  dp[1][i]=1;
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < k; j++){
            for(int m = j; m <k; m++){
                dp[i][j]= (dp[i][j]+dp[i-1][m])%mod;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < k; i++) ans = (ans+dp[n][i])%mod;
    cout << ans << '\n';
}