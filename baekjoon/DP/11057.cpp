//
// 11057.cpp
// PS
//
// Created by mooninzoo on 2020-05-26.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 오르막 수
 */
#include <iostream>
using namespace std;
int a[1001][11];
int main(){
    int n,answer=0;
    cin >>n;
    for(int i = 0; i < 10;i++) a[1][i]=1;
    for(int i=2;i<=n;i++){
        int temp = 0;
        for(int j = 0; j <10; j++){
            temp=(temp+a[i-1][j])%10007;
            a[i][j]=temp;
        }
    }
    for(int i = 0; i < 10;i++) answer+=a[n][i];
    cout << answer%10007;
}