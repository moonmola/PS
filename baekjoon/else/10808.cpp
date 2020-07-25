//
// 10808.cpp
// coding
//
// Created by mooninzoo on 2020-07-26.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 알파벳 개수
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    int arr[26] = {0,};
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){    arr[(int)str[i]-97]++;    }
    for(int i = 0; i < 26; i++){    cout << arr[i]<<' ';    }
}



