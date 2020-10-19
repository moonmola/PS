//
// 2193.cpp
// PS
//
// Created by mooninzoo on 2020-05-27.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 이친수
 * long long으로 하니까 맞았담
 */
#include <iostream>
using namespace std;
long long a[91][3];
int main(){
    int n;
    cin >> n;
    a[1][0]=0;
    a[1][1]=1;
    for(int i =2; i<n+1; i++){
        a[i][0] = a[i-1][0]+a[i-1][1];
        a[i][1] = a[i-1][0];
    }
    cout << a[n][0]+a[n][1];
}