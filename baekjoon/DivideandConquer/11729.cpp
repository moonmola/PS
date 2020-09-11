//
// 11729.cpp
// PS
//
// Created by mooninzoo on 9/11/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 하노이 탑 이동 순서
 * RETRY
 * 원판의 개수가 n일떄 2^n-1이 최소 횟수이다
 */

#include <iostream>
#include <cmath>
using namespace std;
void hanoi(int n,int start, int to, int bypass){
    if(n==1)
        cout <<start <<' '<< to << '\n';
    else{
        hanoi(n-1, start,bypass,to);
        cout << start <<' '<< to << '\n';
        hanoi(n-1, bypass,to,start);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int num;
    cin >> num;
    cout << (int)pow(2,num)-1 << '\n';
    hanoi(num,1,3,2);
}
