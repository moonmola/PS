//
// 10992.cpp
// coding
//
// Created by mooninzoo on 2020-05-20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

#include <iostream>
using namespace std;
int main(){
    int N;
    cin >>N;
    for(int i =0; i <N; i++){
        if(i!=N-1) {
            for (int j = 0; j < N - i - 1; j++) {
                cout << ' ';
            }
            for (int j = 0; j < 1 + i * 2; j++) {
                if (j == 0 || j == i * 2)
                    cout << '*';
                else
                    cout << ' ';
            }
        }
        else{
            for(int j = 0; j < (N*2)-1; j++)
                cout << '*';
        }
        cout <<endl;
    }
}