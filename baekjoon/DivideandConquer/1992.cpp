//
// 1992.cpp
// PS
//
// Created by mooninzoo on 9/12/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 쿼드트리
 */

#include <iostream>
#include <vector>
using namespace std;
vector<string> a;
string answer;
bool check(int x, int y, int m){
    for(int i = x; i < x+m; i++){
        for(int j = y; j < y+m; j++){
            if(a[x][y] != a[i][j])
                return false;
        }
    }
    return true;
}
void solve(int x, int y, int n) {
    if (check(x, y, n)) {
        answer += a[x][y];
        return;
    }
    int m = n / 2;
    answer += '(';
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            solve(x + m * i, y + m * j, m);
        }
    }
    answer += ')';
}
int main(){
    int n;
    cin >> n;
    a = vector<string>(n);
    for(auto& item : a) cin >> item;
    solve(0,0,n);
    cout << answer;
    return 0;
}