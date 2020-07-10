//
// 11052.cpp
// coding
//
// Created by mooninzoo on 2020-06-07.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 카드 구매하기
 * retry
 */

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p[1000];
    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }
    int dp[1000] = {0,};
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<=i; j++){
            dp[i] = max(dp[i],dp[i-j]+p[j]);
        }
    }
    cout << dp[n] << endl;
}
