//
// 2579.cpp
// PS
//
// Created by mooninzoo on 2020-06-03.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 계단 오르기
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[303] = {0, };
    for(int i = 3; i < n+3; i++)  cin>>arr[i];
    int dp[303] = {0, };
    for(int i = 3; i < n+3; i++){
        dp[i] = max(arr[i]+dp[i-2], dp[i-3]+arr[i-1]+arr[i]);
    }
    cout << dp[n+2] << endl;
}