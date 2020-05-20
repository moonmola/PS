//
// 10991.cpp
// coding
//
// Created by mooninzoo on 2020-05-20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 1 ; j < N-i; j++)
            cout << ' ';
        for(int j = 0; j < 1+i*2 ; j++){
            if(j%2 ==0)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }
}