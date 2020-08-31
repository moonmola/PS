//
// 2004.cpp
// PS
//
// Created by mooninzoo on 8/30/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 조합 0의 개수
 * 1676번 생각해서 소인수 분해 해서 5인것만 찾았는데
 * 2인것도 찾아야 한다.
 */
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int result1 = 0;
    int result2 = 0;
    for(int i = 1; pow(5,i)<=2000000000; i++){
        result1 += (int)(n/pow(5,i));
    }
    for(int i = 1; pow(5,i)<=2000000000; i++){
        result1 -= (int)(m/pow(5,i));
    }
    for(int i = 1; pow(5,i)<=2000000000; i++){
        result1 -= (int)((n-m)/pow(5,i));
    }
    for(int i = 1; pow(2,i)<=2000000000; i++){
        result2 += (int)(n/pow(2,i));
    }
    for(int i = 1; pow(2,i)<=2000000000; i++){
        result2 -= (int)(m/pow(2,i));
    }
    for(int i = 1; pow(2,i)<=2000000000; i++){
        result2 -= (int)((n-m)/pow(2,i));
    }
    cout << min(result1,result2) ;



}

