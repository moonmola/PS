//
// 1780.cpp
// PS
//
// Created by mooninzoo on 9/10/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 종이의 개수
 * RETRY
 */

#include <iostream>
using namespace std;
int paper[2188][2188];
int cnt[3];
// cnt[0] : -1, cnt[1] : 0, cnt[2]:1로만 채워진 종이의 개수
bool same(int x, int y, int n){
    for(int i = x; i < x+n; i++){
        for(int j = y; j <y+n; j++){
            if(paper[x][y]!= paper[i][j])
                return false;
        }
    }
    return true;
}
void solve(int x, int y, int n){
    if(same(x,y,n)){
        cnt[paper[x][y]+1]++;
        return;
    }
    int m = n/3;
    for(int i = 0; i < 3; i ++){
        for(int j = 0 ; j < 3; j++){
            solve(x+i*m, y+j*m, m);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n ; j++)
            cin >> paper[i][j];
    }
    solve(0,0,n);
    for(int i = 0; i < 3; i++) cout << cnt[i] << '\n';
    return 0;
}
