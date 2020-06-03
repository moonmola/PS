//
// 11054.cpp
// PS
//
// Created by mooninzoo on 2020-06-02.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 가장 긴 바이토닉 부분 수열
 * 맞았당
 *
 */
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[1001] = {0, };
    for(int i = 0; i <n; i++)   cin >> arr[i];
    int dp1[1001] = {0, };
    int dp2[1001] = {0, };
    int result = 0;
    for(int i = 0; i< n; i++){
        int left = 0;
        for(int j = 0; j < i; j++){
            if(arr[i]>arr[j]&& dp1[j] >left){
                left=dp1[j];
            }

        }
        dp1[i] = left+1;

    }
    for(int i = n-1; i >=0; i--){
        int right = 0;
        for(int j = n-1; j>i; j--){
            if(arr[i]>arr[j]&&right<dp2[j]) {
                right = dp2[j];
            }
        }
        dp2[i] = right+1;

        if(dp1[i]+dp2[i]>result){
            result = dp1[i]+dp2[i] -1;
        }

    }
    cout << result;

}