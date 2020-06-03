//
// 10844.cpp
// PS
//
// Created by mooninzoo on 2020-05-24.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 계단 숫자의 갯수
 * d[1] = 1 2 3 4 5 6 7 8 9
 * d[2] = 17 (10 12 21 23 32 34 43 45 54 56 65 67 76 78 87 89 98)
 * 숫자가 위로 하나 높거나 위로 하나 낮거나 두가지 경우의 수, 90은 제외이므로 17개
 * 맨뒤 숫자가 0인경우와 9인경우를 찾자
 * d[3] = 17*2-3 (210 789 989)
 * d[4] = 2*d[3] - (1210 3210 6789 8989
 *
 * 안풀리네 솔루션확인
 * dp[n][i] = dp[n-1]dp[j-1] + dp[n-1][i+1]
 * index 0 1 2 3 4 5 6 7 8 9
 * dp[0] 0 1 1 1 1 1 1 1 1 1
 * dp[1] 1 1 2 2 2 2 2 2 2 1
 * dp[2] 1 3 3 4 4 4 4 4 3 2
 */
//베스트 코드, 슬라이딩 윈도우 기법
#include <iostream>
#define MOD 1000000000
using namespace std;
int main(){
    int a[2][12];
    int n, ans;
    cin >> n;
    for(int i = 2; i< 11; i++)
        a[1][i] = 1;
    for(int i = 2; i <=n; i++){
        ans = 0;
        for(int j = 1; j <11;j++){
            a[i%2][j] = (a[(i-1)%2][j-1]) + a[(i-1)%2][j+1] % MOD;
            ans = (ans + a[i%2][j]) % MOD;
        }
    }
    cout << ans;
}


/*솔루션 본 내코드
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int dp[n][10];
    dp[0][0] = 0;
    for(int j = 1; j<10;j++) dp[0][j] = 1;
    for(int i = 1; i<n; i++){
        for(int j = 0; j<10;j++){
            if(j==0) dp[i][j] = dp[i-1][j+1];
            else if(j==9) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = (dp[i-1][j-1]+dp[i-1][j+1])%1000000000;
        }
    }
    int result=0;
    for(int j = 0; j<10;j++) result =( result+dp[n-1][j])%1000000000;
    cout << result;
}
 */


/* 내코드
int main(){
    int n;
    cin >> n;
    int dp[n];
    dp[1] = 9;
    dp[2] = 17;
    for(int i = 3; i <=n; i++) dp[i] = (dp[i-1]*2 -i)%1000000000;
    cout << dp[n];
}
 */