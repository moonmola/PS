// 1463.cpp
// PS
//
// Created by mooninzoo on 2020-05-22.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * 1로 만들기
 */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n+1);
    v[1]=0;
    for(int i = 2; i<n+1; i++){
        int m = 1e9;
        if(i%3==0){
            m = min(v[i/3]+1,m);
        }
        if(i%2==0){
            m = min(v[i/2]+1,m);
        }
        m=min(v[i-1]+1,m);
        v[i]=m;
    }
    cout << v[n];
}