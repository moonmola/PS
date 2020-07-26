//
// 11656.cpp
// coding
//
// Created by mooninzoo on 2020-07-26.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 접미사 배열
 * 더 빠른 방법이 있을것 같음
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;
    string temp;
    string *arr = new string [str.size()];
    for(int i = str.size()-1; i >= 0; i--){
        temp= str[i]+temp;
        arr[i] = temp;
    }
    sort(arr,arr+str.size());
    for(int i = 0; i < str.size(); i++){
        cout << arr[i] << endl;
    }

}