//
// 11057.cpp
// PS
//
// Created by mooninzoo on 2020-05-26.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 오르막 수
 *    0  1  2  3  4  5  6  7  8  9
 *  1 1  1  1  1  1  1  1  1  1  1
 *  2 1  2  3  4  5  6  7  8  9  10
 *  3 1  3  6  10 15 21 ...
 *  4
 */
#include <iostream>
using namespace std;
#define mod 10007

int main(void){
    int N;
    int number[1001][10] = {};
    int total = 0;

    cin >> N;

    for (int i = 0; i < 10; i++)
        number[1][i] = 1;

    for (int i = 2; i <= N; i++)
        for (int j = 0; j < 10; j++)
            for (int k = j; k < 10; k++)
                number[i][j] = (number[i][j] + number[i - 1][k]) % mod;

    for (int i = 0; i < 10; i++)
        total = (total + number[N][i]) % mod;

    cout << total;

    return 0;
}
/* 슬라이딩 내가 푼거 근데 왜 메모리가 더 많지? - iostream하면 메모리가 많아지나
#include <iostream>
using namespace std;
#define mod 10007
int main(){
    int n;
    cin >> n;
    int dp[2][10];
    for(int i = 0; i < 10; i++ )
        dp[0][i] = 1;
    int result;
    for(int i = 1; i < n ; i++){
        for(int j = 0; j < 10; j++){
            dp[i%2][j]=0;
            for(int k = 0; k <= j; k++){
                dp[i%2][j] = (dp[i%2][j]+ dp[(i+1)%2][k])%mod;
            }
        }
    }
    result = 0;
    for(int i = 0; i < 10; i++){
        result = (result+ dp[(n-1)%2][i])%mod;
    }
    cout <<result;
}
 */


/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int dp[1001][10];
    for(int i = 0; i < 10; i++){
        dp[0][i] = 1;
        dp[1][i] = 10-i;
    }
    int result;
    for(int i = 0 ;i < n; i++){
        result = 0;
        for(int j = 0; j<10; j++) {
            if(i>1)
                if(j!=0)
                    dp[i][j] = (dp[1][j]*(i-1)*(j+1))%10007;
                else {
                    dp[i][j] = 10;
                }
            result += dp[i][j]%10007;
        }
    }
    cout << result;
}
 */