//
// 11727.cpp
// PS
//
// Created by mooninzoo on 2020-05-23.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * DP(2×n 타일링 2)
 * i번째 타일은 i-1번째에서 1x2 타일 한개 붙이는 경우와
 * i-2번째에서 2x1타일 두개 붙이는 경우와 2x2타일 한개 붙이는 경우
 * d[1] = 1
 * d[2] = 3 (11 2 3)
 * d[3] = 5 (111 12 13 31 21)              2d[i-2]+d[i-1]
 * d[4] = 11 (1111 121 131 112 113 311 211 22 33 23 32)
 */
#include <iostream>
using namespace std;
int dp(int* d, int n){
    for(int i = 3; i<=n; i++) {
        d[i] = (2 * d[i - 2] + d[i - 1]) % 10007;
    }

    return d[n];
}

int main(){
    int n;
    cin >> n;
    int d[n+1];
    d[1] = 1;
    d[2] = 3;
    cout << dp(d,n);

    return 0;
}
