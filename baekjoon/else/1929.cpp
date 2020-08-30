//
// 1929.cpp
// PS
//
// Created by mooninzoo on 8/29/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 소수 구하기
 * 에라토스테네스의 체(소수 구하는 방법) 이용
 * : 소수의 배수인것을 지워서 소수를 구하는 방법
 */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m,n;
    vector<bool> vec(1000001,true);
    vec[0] = false;
    vec[1] = false;

    cin >> m >> n;

    for(int i = 2; i <n+1; i++){
        if(vec[i]){
            for(int j = 2 * i ;j <n+1; j = j+i)
                vec[j] = 0;
        }
    }
    for(int i = m; i < n+1; i++){
        if(vec[i])  cout << i << '\n';
    }
    return 0;
}

