//
// 2447.cpp
// PS
//
// Created by mooninzoo on 9/12/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 별 찍기 - 10
 */

#include <iostream>
#include <vector>
using namespace std;
char a[6562][6562];
void blank(int x, int y, int n){
    for(int i = x; i < x+n; i ++){
        for(int j = y; j < y+n; j++){
            a[i][j] = ' ';
        }
    }
}
void star(int x, int y, int n){
    if(n == 1){
        a[x][y] = '*';
        return;
    }
    int m = n/3;
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            if(i==1&& j==1)
                blank(x+i*m,y+j*m,m);
            else
                star(x+i*m, y+j*m, m);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int num;
    cin >> num;
    star(0,0,num);
    for(int i = 0; i < num; i ++){
        for(int j = 0; j < num; j++){
            cout << a[i][j];
        }
        cout << '\n';
    }
    cout << '\n';
}