//
// 10430.cpp
// coding
//
// Created by mooninzoo on 2020-07-29.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 나머지
 */

#include <iostream>

using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;
    cout <<  (A+B)%C << endl << ((A%C) + (B%C))%C << endl <<(A*B)%C << endl<<((A%C) * (B%C))%C;


}