//
// 9095.cpp
// PS
//
// Created by mooninzoo on 2020-05-23.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 1, 2, 3 더하기
 */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<int> v(12);
    v[1]=1;
    v[2]=2;
    v[3]=4;
    for(int i =4; i <12; i++){
        v[i] = v[i-1]+v[i-2]+v[i-3];
    }
    for(int T=0; T<t; T++) {
        int n;
        cin >> n;
        cout << v[n]<<'\n';
    }
}