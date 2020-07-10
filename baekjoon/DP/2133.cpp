//
// 2133.cpp
// coding
//
// Created by mooninzoo on 2020-06-04.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 鸥老 盲快扁
 * 贾风记
 */
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int dp[31] = {1,0,3,0,};
    for(int i = 4; i <= n; i++){
        if(i%2 ==0){
            dp[i] = dp[i-2]*3;
            for(int j = i-4; j>=0; j=j-2){
                dp[i] = dp[i] + dp[j]*2;
            }
        }
    }
    cout << dp[n] << endl;
}

/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dp[31] = {0, };
    int result = 0;
    dp[2] = 3;
    for(int i =4; i<=n; i++){
        if(i%2 ==0){
            if(i%4==0){
                dp[i] = 8;
                for(int j = 1; j<i/4;j++) dp[i] = 8*dp[i];
            }
            else{
                dp[i] = dp[i-2]*3*2;
            }
        }
    }
    cout << dp[n] << endl;
}
 */

