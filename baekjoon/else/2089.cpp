//
// 2089.cpp
// PS
//
// Created by mooninzoo on 8/27/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * -2진수
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
//    cout << -13%-2 << ":" << -13/-2<<endl;
//    cout << 7%-2 << ":" << 7/-2<<endl;
//    cout << -3%-2 << ":" << -3/-2<<endl;
//    cout << -1%-2 << ":" << -1/-2<<endl;
//    cout << 2%-2 << ":" << 2/-2<<endl;
//    결과가 0이 아닐때에 1 추가:-일때는 +1해주고 +일때는 그대로 사용
//    cout << 4%-2 << ":" << -4/-2<<endl;
//    cout << -2%-2 << ":" << -2/-2<<endl;
//    딱 떨어질때에는 -이여도 + 안해줘야함


    int n;
    cin >> n;
    if(n == 0){
        cout << 0;
        return 0;
    }
    string result;
    while(n){
        if(n>0){
            if(n%-2)    result.push_back('1');
            else    result.push_back('0');
            n = n/-2;
        }
        else{
            if(n%-2) {
                result.push_back('1');
                n = n/-2 +1;
            }
            else {
                result.push_back('0');
                n = n/-2;
            }
        }
        if(n==1){
            result.push_back('1');
            break;
        }
    }
    reverse(result.begin(),result.end());
    cout << result;
    return 0;

}
