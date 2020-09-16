//
// 1476.cpp
// PS
//
// Created by mooninzoo on 9/12/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 날짜 계산
 */

#include <iostream>
using namespace std;
int main(){
    int e,s,m;
    cin >> e >> s >> m;
    int a=0,b=0,c=0;
    int answer = 0;
    while (a!=e||b!=s||c!=m){
        a = (a+1)%16;
        if(!a) a++;
        b = (b+1)%29;
        if(!b) b++;
        c = (c+1)%20;
        if(!c) c++;
        answer++;
    }
    cout << answer;
}

