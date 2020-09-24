// PS 2580.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/24/20
/*
 * 스도쿠
 * RETRY
 */
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int sudoku[9][9];
int cnt;
bool found;
vector<pair<int,int>> v;


bool check(pair<int,int> p){
    int sx = p.first/3;
    int sy = p.second/3;
    for(int i = 0; i < 9 ;i++){
        if(sudoku[p.first][i]==sudoku[p.first][p.second]&&i!=p.second)
            return false;
        if(sudoku[i][p.second]==sudoku[p.first][p.second] && i!=p.first)
            return false;
    }
    for(int i = sx*3; i<sx*3 +3; i++){
        for(int j = sy*3; j<sy*3+3; j++){
            if(sudoku[p.first][p.second]==sudoku[i][j])
                if(i!=p.first&&j!=p.second) return false;
        }
    }
    return true;
}
void solve(int N) {
    if(N == cnt)
    {
        for(int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++)
                cout << sudoku[i][j] << ' ';
            cout << '\n';
        }
        found = true;
        return;
    }
    for(int j = 1; j <= 9; j++) {
        sudoku[v[N].first][v[N].second] = j;
        if (check(v[N])) {
            solve(N + 1);
        }
        if(found)
            return;
    }
    sudoku[v[N].first][v[N].second] = 0;
    return;
}

int main(){

    cnt = 0;
    found = false;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> sudoku[i][j];
            if(!sudoku[i][j]) {
                v.push_back({i, j});
                cnt++;
            }
        }
    }
    solve(0);



}