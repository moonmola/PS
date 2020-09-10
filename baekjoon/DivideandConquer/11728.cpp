//
// 11728.cpp
// PS
//
// Created by mooninzoo on 9/8/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 배열 합치기
 * merge sort
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(auto& elem:a)   cin >> elem;
    for(auto& elem:b)   cin >> elem;
    int ai=0,bi=0;
    while(ai<n&& bi<m){
        if(a[ai] < b[bi])
            cout << a[ai++] <<' ';
        else
            cout << b[bi++] << ' ';
    }
    while(ai<n)
        cout << a[ai++] << ' ';
    while(bi<m)
        cout << b[bi++] << ' ';

}


