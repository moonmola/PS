//
// 1406.cpp
// coding
//
// Created by mooninzoo on 2020-07-26.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 에디터
 * string.erase(a,n) a부터 n개의 문자 삭제
 * iter사용과 일반 int형 사용에서 시간차이가 많이 나나?
 *
 */

#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int N;
    cin >> str;
    cin >> N;
    list<char> l;
    list<char>::iterator iter = l.end();
    for(int i = 0; i < str.length(); i++){
        l.push_back(str[i]);
    }

    for(int i = 0; i < N; i++){
        char command;
        cin >> command;
        if(command == 'P'){
            char elem;
            cin >> elem;
            l.insert(iter,elem);
        }
        else if(command == 'L'){
            if(iter!=l.begin())   iter--;
        }
        else if (command == 'D'){
            if(iter!=l.end()) iter++;
        }
        else if(command == 'B') {
            if(iter != l.begin()) {
                iter = l.erase(--iter);
            }
        }
//        cout << cursor << ':' << str << endl;
    }
    for(list<char>::iterator iter = l.begin(); iter != l.end(); iter++) {
        cout << *iter;
    }


}
