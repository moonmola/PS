//
// 10610.cpp
// PS
//
// Created by mooninzoo on 9/12/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 30
 * RETRY
 * 30의 배수가 될 조건 1: 끝자리 0 2: 모든자리의수를 더하면 3의 배수
 * 배수판정법!
 *
 */

#include <iostream>
#include <algorithm>
using namespace std;
int cmp(int a, int b){
    return a > b;
}
int main(){
    string n;
    cin >> n;
    sort(n.begin(),n.end(),cmp);
    if(stoll(n)%30!=0){
        cout<< -1;
        return 0;
    }
    cout << n;

}
