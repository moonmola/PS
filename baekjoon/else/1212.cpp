//
// 1212.cpp
// PS
//
// Created by mooninzoo on 8/24/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 8진수 2진수
 * 0일때 예외처리 안해서 한번 틀림
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string n;
    cin >> n;
    string result;
    if(n=="0"){
        cout << 0;
        return 0;
    }
    for(int i = 0; i < n.size(); i++){
        int temp = n[i]-'0';
        string temp_2;
        while(temp){
            temp_2.push_back(temp%2+'0');
            temp = temp/2;
        }
        if(i>0) {
            while (temp_2.size() < 3) {
                temp_2.push_back('0');
            }
        }
        reverse(temp_2.begin(),temp_2.end());
        result +=temp_2;
    }
    cout << result;
    return 0;

}