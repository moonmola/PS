//
// 11055.cpp
// PS
//
// Created by mooninzoo on 2020-06-02.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[1010] = {0,};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int dp[1010] = {0, };
    dp[0] = arr[0];
    int max = dp[0];
    for(int i = 0; i < n; i++){
        dp[i] = arr[i];
        for(int j = 0; j < i; j++){
            if(arr[i]>arr[j] && dp[i] < dp[j]+arr[i]){
                dp[i] = dp[j]+ arr[i];
            }
        }
        if(max<dp[i])
            max = dp[i];
    }
    cout << max << endl;
}
