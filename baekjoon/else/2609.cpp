//
// 2609.cpp
// PS_baekjoon
//
// Created by mooninzoo on 2020-07-31.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 최대공약수와 최소공배수
 * RETRY
 */

#include <iostream>
using namespace std;
//최대공약수
int gcd(int a, int b){
    while( b!= 0 ){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a, int b){
    return a*b/gcd(a,b);
}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1,num2)<< endl;
    cout << lcm(num1,num2) << endl;

}

