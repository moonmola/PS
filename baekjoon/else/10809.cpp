//
// 10809.cpp
// coding
//
// Created by mooninzoo on 2020-07-26.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 알파벳 찾기
 */
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int arr[26];
    for(int i = 0; i < 26; i++) arr[i]=-1;

    for(int i =0 ;i < str.size(); i++){
        if(arr[(int)str[i]-97] == -1)    arr[(int)str[i]-97] = i;
    }
    for(int i = 0; i < 26; i++) cout << arr[i] << ' ';
}

