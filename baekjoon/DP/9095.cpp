//
// 9095.cpp
// coding
//
// Created by mooninzoo on 2020-05-23.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * dp 문제 : 점화식 구하기
 * d[1] = 1 (1)
 * d[2] = 2 (1+1 2)
 * d[3] = 4 (1+1+1 1+2 2+1 3)
 * d[4] = d[1] + d[2] + d[3]
 */

#include <iostream>
using namespace std;
int main(){
    int t_case;
    cin >> t_case;
    int num[t_case], dp[11];
    dp[1] = 1; dp[2] = 2; dp[3] = 4;
    for(int i =4; i <11; i++) dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    for(int i = 0; i <t_case; i++)
        cin >> num[i];
    for(int i = 0; i <t_case;i++)
        cout << dp[num[i]] << endl;

}