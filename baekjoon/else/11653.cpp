//
// 11653.cpp
// PS
//
// Created by mooninzoo on 8/30/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 소인수분해
 * RETRY
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 2; i*i<=n; i++){
        while(n%i==0){
            cout << i << '\n';
            n = n/i;
        }
    }
    if(n>1) cout << n <<'\n';

}