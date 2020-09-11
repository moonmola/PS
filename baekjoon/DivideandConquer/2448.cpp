//
// 2448.cpp
// PS
//
// Created by mooninzoo on 9/12/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 별 찍기 - 11
 * RETRY
 * 중단
 * devide and conquer 여기까지 일단 하고 그리디로 넘어감
 */

#include <iostream>
#include <cmath>
using namespace std;
int num_x;
int num_y;

void star(int x, int y){


}

int main(){
    cin >> num_y;
//    star(0,0,3);
    num_x = 3*pow(2,num_x+1)-1;
    for(int i = 0; i < num_y; i++){
        for(int j = 0; j < num_x; j++){
            star(i,j);
        }
        cout << '\n';
    }
    cout << '\n';
}
