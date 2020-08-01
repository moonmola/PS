//
// 1850.cpp
// coding
//
// Created by mooninzoo on 8/1/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 최대공약수
 */

#include <iostream>
using namespace std;

void swap(long& a, long& b){
    long temp = a;
    a = b;
    b = temp;
}
long gcd(long a, long b){
    if(a<b) swap(a,b);
    while( b!=0 ){
        long r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    long a,b;
    cin >> a >> b;
    for(long i = 0; i< gcd(a,b); i++) cout << 1 ;
}
