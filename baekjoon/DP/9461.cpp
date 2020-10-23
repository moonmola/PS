//
// 9461.cpp
// coding
//
// Created by mooninzoo on 2020-06-05.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 파도반 수열
 */
#include <iostream>
using namespace std;
int main(){
    long long a[101]={0,1,1,1,2,2,0};
    int t,n;
    cin >> t;
    for(int i = 6; i <=100; i++){
        a[i] = a[i-1]+a[i-5];
    }
    for(int T=0;T<t;T++) {
        cin >> n;
        cout << a[n] << '\n';
    }
}