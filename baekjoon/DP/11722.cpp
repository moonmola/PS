//
// 11722.cpp
// PS
//
// Created by mooninzoo on 2020-06-02.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * 가장 긴 감소하는 부분 수열
 */
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dp[1001] = {0, };
    int arr[1001] = {0, };

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    dp[0] = 1;
    int result = dp[0];
    for(int i = 1; i < n; i++){
        int max_n = 0;
        for(int j = 0; j <i; j++){
            if(max_n<dp[j]&& arr[i]<arr[j])
                max_n = dp[j];
        }
        dp[i]= max_n+1;
        if(result<dp[i])
            result = dp[i];
    }
    cout << result << endl;

}
