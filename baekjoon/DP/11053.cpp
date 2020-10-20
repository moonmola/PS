//
// 11053.cpp
// PS
//
// Created by mooninzoo on 2020-05-30.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 가장 긴 증가하는 부분 수열
 * RETRY
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,ans=0;
    cin >> n;
    vector<int> v(n);
    vector<int> dp(n);
    for(int i = 0; i <n; i++)   cin >> v[i];
    for(int i = 0; i<n;i++){
        dp[i]=1;
        for(int j = 0; j < i; j++){
            if(v[i]>v[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
        ans = max(ans,dp[i]);
    }
    cout << ans;
}
