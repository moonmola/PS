//
// 10872.cpp
// PS
//
// Created by mooninzoo on 8/30/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 팩토리얼
 */

#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int result = 1;
    for(int i = 2; i<=num; i++){
        result*=i;
    }
    cout << result;
}
