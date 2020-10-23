//
// 1699.cpp
// coding
//
// Created by mooninzoo on 2020-06-04.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 제곱수의 합
 */
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    v[1] = 1;
    v[2] = 2;
    v[3] = 3;
    for (int i = 2; i * i <= n; i++) v[i * i] = 1;
    vector<int> f;
    f.push_back(4);
    for (int i = 5; i <= n; i++) {
        if (v[i] == 1) {
            f.push_back(i);
            continue;
        }
        v[i]=v[i-f[0]]+1;
        for(auto j : f) {
            v[i] = min(v[i - j] + 1,v[i]);
        }
    }
    cout << v[n] << '\n';
}