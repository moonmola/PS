//
// 2156.cpp
// coding
//
// Created by mooninzoo on 2020-05-28.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * 포도주 시식retry
 * dp[n]에 n까지의 최대로 마실 수 있는 포도주의 양을 넣는다
 * 11 10 20 59 1 15
 * 59일때는 11+20+59가 최대
 * 20 까지는 최댓값이 11+10+20
 *
 * 솔루션봤음
 * dp[n] = dp[i-2] + arr[i] ->i번째 포도주 + i+2번째까지의 최댓값
 * dp[n] = dp[i-3] + arr[i-1] + arr[i] ->i번째 포도주 + i-1번째 포도주 + i-3까지의 최댓값
 * max(dp[n],dp[n-1)) ->2번 연속 안먹을 경우가 존재
 * 위에 두개까진 생각했음
 */
/*
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[10003] = {0, };
    int dp[10003] = {0, };
    for(int i= 3; i < n+3; i ++) {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 3; i < n+3; i++) {
        if(i==6) {
            dp[i] = max({dp[i - 3] + arr[i] + arr[i - 1], dp[i - 2] + arr[i], dp[i - 1], dp[i - 4] + arr[i-2] + arr[i-1] + arr[i]});
        }
        else {
            dp[i] = max({dp[i - 3] + arr[i] + arr[i - 1], dp[i - 2] + arr[i],dp[i-1]});
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}
 */
/* 이게 맞았음 하지만 1 2 3 4 의 경우 틀림
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[10003] = {0, };
    int dp[10003] = {0, };
    for(int i= 3; i < n+3; i ++) {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 3; i < n+3; i++) {
        dp[i] = max({dp[i - 3] + arr[i] + arr[i - 1], dp[i - 2] + arr[i],dp[i-1]});
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}
*/