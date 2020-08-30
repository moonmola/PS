//
// 6588.cpp
// PS
//
// Created by mooninzoo on 8/29/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 골드바흐의 추측
 * RETRY(X)
 */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<bool> vec(1000001,1);
    for(int i = 2; i*i <=1000000; i++){
        if(vec[i]) {
            for (int j = 2; i * j <= 1000000; j++) vec[i * j] = false;
        }
    }

    int num;
    while(1){
        cin >> num;
        if(num == 0)     break;
        int i=3;
        while(1){
            if(num-i<0){
                cout << "Goldbach's conjecture is wrong.\n";
                break;
            }
            if(vec[i] == true && vec[num-i] == true){
                cout << num << '=' << i << '+' << num-i;
                break;
            }
            i++;
        }
    }

}

