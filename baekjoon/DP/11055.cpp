//
// 11055.cpp
// PS
//
// Created by mooninzoo on 2020-06-02.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 가장 큰 증가 부분 수열
 */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,ans=0;
    cin >> n;
    vector<int> v(n);
    vector<int> dp(n);
    for (int i = 0; i < n; ++i) cin>>v[i];
    for(int i = 0; i < n; i++){
        dp[i] = v[i];
        for(int j = 0; j <i; j++){
            if(v[i]>v[j]){
                dp[i] = max(dp[i],dp[j]+v[i]);
            }
        }
        ans = max(ans,dp[i]);
    }
    cout << ans << '\n';
}