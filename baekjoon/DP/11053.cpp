//
// 11053.cpp
// PS
//
// Created by mooninzoo on 2020-05-30.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 가장 긴 증가하는 부분 수열
 * 솔루션 확인
 * 현재의 자신값과 과거의 값들을 돌아봐서 그중 최대의 값으로 자신의 최대 길이를 정한다
 * 각 부분마다 과거의 저장한 배열을 검색해야한다
 * 그림설명 : https://wootool.tistory.com/96
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dp[1000];
    int arr[1000];
    int max = 0;
    for(int i = 1;i<=n; i++) cin>>arr[i];
    dp[0] = 0;
    for(int i = 1; i<= n; i++){
        int min = 0;
        for(int j = 0; j < i; j++){
            if(arr[i]>arr[j]){
                if(min< dp[j])
                    min = dp[j];
            }
        }
        dp[i] = min+1;
        if(max <dp[i])
            max = dp[i];
    }
    cout << max << endl;
}