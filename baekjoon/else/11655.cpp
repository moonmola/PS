//
// 11655s.cpp
// coding
//
// Created by mooninzoo on 2020-07-26.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * ROT13
 */

#include <iostream>
#include <string>
using namespace std;
// 공백 32 소문자 97~122 대문자 65~90 숫자 48~57

int main(){
    string str;
    getline(cin,str);
    string result;
    for(int i = 0; i < str.size(); i++){
        if((int)str[i]>=97 && (int)str[i]<=122){
            result += (char)(((int)str[i]-97+13)%26)+97;
        }
        else if((int)str[i]>=65 && (int)str[i]<=90){
            result += (char)(((int)str[i]-65+13)%26)+65;
        }
        else{
            result += str[i];
        }
    }
    cout << result;
}
