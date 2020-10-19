//
// 10844.cpp
// PS
//
// Created by mooninzoo on 2020-05-24.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 쉬운 계단 수
 * RETRY
 */
#include <iostream>
#include <vector>
using namespace std;
#define mod 1000000000
int a[101][10];
int main(){
    int n;
    cin >> n;
    a[1][0] = 0;
    for(int i = 1; i < 10; i++){
        a[1][i]=1;
    }
    for(int i = 2;i<=n;i++){
        for(int j = 0; j <10; j++){
            if(j==0)    a[i][j] = a[i-1][j+1];
            else if(j==9) a[i][j] = a[i-1][j-1];
            else    a[i][j] = (a[i-1][j-1]+a[i-1][j+1])%mod;
        }
    }
    int answer = 0;
    for(int i = 0; i < 10; i++)    answer = (answer+a[n][i])%mod;
    cout << answer;
}