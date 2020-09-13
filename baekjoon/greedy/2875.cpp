//
// 2875.cpp
// PS
//
// Created by mooninzoo on 9/12/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 대회 or 인턴
 */

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m , k;
    cin >> n >> m >> k;
    int team = n/2;
    if(team>m)
        team = m;
    int answer = n-team*2 + m-team;
    while(answer < k){
        answer +=3;
        team--;
    }
    cout<< team;
}

