//
// 1373.cpp
// PS
//
// Created by mooninzoo on 8/17/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 *  2진수 8진수
 */
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(){
    string num;
    string result;
    cin >> num;
    if(num.size()%3 >0)     num.insert(num.begin(),3-num.size()%3,'0');
    for(int i = 0; i < num.size()/3; i++) {
        int temp = 0;
        for(int j = i*3; j < i*3 +3; j++){
            if(num[j]=='1')   temp += pow(2,2-j%3);
        }
        result.push_back('0'+temp);
    }
    cout << result;
}
