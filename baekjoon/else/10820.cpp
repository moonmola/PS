//
// 10820.cpp
// coding
//
// Created by mooninzoo on 2020-07-26.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 문자열 분석
 * getline(cin,str)
 */
#include <iostream>
#include <string>
using namespace std;

int main(){
    // 공백 32 소문자 97~122 대문자 65~90 숫자 48~57
    string str;
    int arr[4] = {};
    char sample;
    while(getline(cin,str)){
        for(int i = 0; i < str.size(); i++){
            if((int)str[i] == 32)   arr[3]++;
            else if((int)str[i] <58)    arr[2]++;
            else if((int)str[i]<91)     arr[1]++;
            else    arr[0]++;
        }
        for(int i = 0; i < 4; i++)  {
            cout << arr[i] << ' ';
            arr[i] = 0;
        }
        cout << '\n';

    }
}
