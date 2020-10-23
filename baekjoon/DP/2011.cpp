//
// 2011.cpp
// coding
//
// Created by mooninzoo on 2020-06-06.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * 암호코드
 * RETRY
 */
#include <iostream>
#include <vector>
#include <string>
#define mod 1000000
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<int> dp(s.size());
    if(s[0]>'0' && s[0] <='9') dp[0]=1;
    if(s[1]>'0' && s[1] <='9') dp[1]= (dp[1]+dp[0])%mod;
    int temp = (s[1-1]-'0')*10 + s[1]-'0';
    if(temp>=10 && temp <=26) dp[1]=(dp[1]+1)%mod;
    for(int i = 2; i < s.size(); i++){
        if(s[i]>'0' && s[i] <='9') dp[i]= (dp[i]+dp[i-1])%mod;
        int temp = (s[i-1]-'0')*10 + s[i]-'0';
        if(temp>=10 && temp <=26) dp[i]=(dp[i-2]+dp[i])%mod;
    }
    cout << dp[s.size()-1] << '\n';
}