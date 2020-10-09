// PS 삼각달팽이.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/7/20
#include <string>
#include <vector>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    vector<int> answer;
    vector<int> v[6];
    int n = 6;
    for(int i = 1; i <= n; i++) v[i-1]= vector<int> (i);
    int x=-1,y = 0,num=0,k=0;
    for(int i = n; i>=0; i--){
        if(k%3==0){
            for(int j = 0; j < i; j++) {
                x++;
                num++;
                v[x][y] = num;
            }
        }
        else if(k%3==1){
            for(int j = 0; j <i; j++){
                y++;
                num++;
                v[x][y] = num;
            }
        }
        else{
            for(int j = 0; j <i; j++){
                y--;x--;
                num++;
                v[x][y] = num;
            }
        }
        k++;
    }
    for(int i = 0; i < n; i++){
        for(auto elem: v[i]){
            answer.push_back(elem);
        }
    }

}



