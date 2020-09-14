// PS 2873.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/13/20

/*
 * 롤러코스터
 * RETRY
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    vector<int> table[r];
    int minimun=10000000;
    for(int i = 0; i < r; i++){
        table[i] = vector<int>(c);
        for(int j = 0; j < c ; j++){
            cin >> table[i][j];
            minimun = min(minimun,table[i][j]);
        }
    }
    if(r%2){
        string ans = "";
        bool right = true;
        for(int j = 0; j < r ; j++) {
            if (right) {
                for (int i = 0; i < c - 1; i++) ans += 'R';
                right = !right;
            } else {
                for (int i = 0; i < c - 1; i++) ans += 'L';
                right = !right;
            }
            if(j+1 < r) ans+='D';
        }
        cout << ans << '\n';
    }
    else if( c%2 == 1){
        string ans = "";
        bool down = true;
        for(int i = 0; i < c; i++){
            if(down){
                for(int j = 0; j < r-1; j++)    ans+='D';
                down = !down;
            }
            else{
                for(int j = 0; j < r-1; j++)    ans+='U';
                down = !down;
            };
            if(i+1 < c)  ans+='R';
        }
        cout << ans << '\n';
    }
    else{

    }
//    for(int i = 0; i < r; i++)

}