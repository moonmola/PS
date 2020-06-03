//
// 1912.cpp
// PS
//
// Created by mooninzoo on 2020-06-03.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * 연속합
 * retry
 */
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int result;
    int dp[n];
    dp[0]=arr[0];
    result = dp[0];
    for(int i = 1; i<n; i++) {
        dp[i] = max(dp[i-1]+arr[i],arr[i]);
        result = max(result,dp[i]);
    }
    cout << result;
}


/* 시간초과
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int dp1[n];
    int result;
    dp1[0]=arr[0];
    for(int i = 1; i<n; i++) {
        dp1[i] = dp1[i - 1] + arr[i];
    }
    result = dp1[0];
    for(int i = 0 ;i < n ; i++){
        int max = dp1[0];
        for(int j = 0; j <i; j++){
            if(max<dp1[i]-dp1[j])   max = dp1[i]-dp1[j];
        }
        if(result < max)
            result = max;
    }
    cout << result;
}
 */
