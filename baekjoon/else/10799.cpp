//
// 10799.cpp
// coding
//
// Created by mooninzoo on 2020-07-24.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 쇠막대기
 */
#include <iostream>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int answer = 0;
    int cnt = 0;
    for(int i = 0; i <s.size(); i++){
        if(s[i]=='('){
            if(s[i+1]==')'){
                answer+=cnt;
                i++;
            }
            else{
                cnt++;
            }
        }
        else{
            cnt--;
            answer++;
        }
    }
    cout << answer << '\n';
}




