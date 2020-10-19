//
// 9465.cpp
// PS
//
// Created by mooninzoo on 2020-05-27.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * 스티커
 * RETRY
 */
#include <iostream>
#include <algorithm>
using namespace std;
int a[2][100001]={ 0 };
int dp[2][100001]={ 0 };
int main(){
    int T,n;
    cin >> T;
    for(int t=0; t<T; t++){
        cin >> n;
        for(int i = 0; i < n; i++)  cin>>a[0][i];
        for(int i = 0; i < n; i++)  cin>>a[1][i];
        dp[0][0]=a[0][0];
        dp[1][0]=a[1][0];
        dp[0][1]=a[0][1]+dp[1][0];
        dp[1][1]=a[1][1]+dp[0][0];
        for(int i = 2;i<n; i++){
            dp[0][i] = a[0][i]+max(dp[1][i-1],dp[1][i-2]);
            dp[1][i] = a[1][i]+max(dp[0][i-1],dp[0][i-2]);
        }
        cout << max(dp[0][n-1],dp[1][n-1])<<'\n';
    }
}