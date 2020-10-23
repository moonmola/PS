//
// 2133.cpp
// coding
//
// Created by mooninzoo on 2020-06-04.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 타일 채우기
 */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int dp[31] = {0};
    dp[2]=3;
    for(int i = 4; i <=n; i+=2){
        dp[i]=dp[i-2]*3+2;
        for(int j =4; j<i; j+=2) {
            dp[i]+=dp[i-j]*2;
        }
    }
    cout << dp[n];
}