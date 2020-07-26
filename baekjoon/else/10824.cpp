//
// 10824.cpp
// coding
//
// Created by mooninzoo on 2020-07-26.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 네 수
 * stoi라고 쓰면 런타임 에러!!!!!
 * stoll써야함
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    int A,B,C,D;
    cin >>A>>B>>C>>D;
    string first, second;
    first = to_string(A)+to_string(B);
    second = to_string(C) + to_string(D);
    cout << (stoll(first)+stoll(second));
}