//
// 2745.cpp
// PS
//
// Created by mooninzoo on 8/17/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 진법 변환
 */

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    string n;
    int b;
    cin >> n >> b;
    int ans = 0;
    int index = n.size()-1;
    for(auto elem : n){
        if(elem>='0' && elem<='9') ans += pow(b,index)*(elem-'0');
        else    ans+= pow(b,index)*(elem - 55);
        index--;
    }
    cout << ans << '\n';
}