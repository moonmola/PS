//
// 1934.cpp
// PS_baekjoon
//
// Created by mooninzoo on 2020-07-31.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 최소공배수
 */

#include <iostream>
using namespace std;
int gcd(int a, int b){
    while(b != 0){
        int r= a%b;
        a=b;
        b=r;
    }
    return a;
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int a,b;
        cin >> a >> b;
        cout << lcm(a,b) << endl;
    }
}


