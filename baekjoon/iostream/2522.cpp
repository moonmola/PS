//
// 2522.cpp
// PS
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
        for(int j = 0; j < N-1-i; j++) cout << ' ';
        for(int j = 0; j < i+1; j++) cout << '*';
        cout <<endl;
    }
    for(int i = N-2; i>=0;i--){
        for(int j = 0; j < N-1-i; j++) cout << ' ';
        for(int j = 0; j < i+1; j++) cout << '*';
        cout << endl;
    }
}