//
// 10866.cpp
// coding
//
// Created by mooninzoo on 2020-07-25.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 덱
 */
#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(){
    deque<int> d;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        string str;
        cin >> str;
        if(str == "push_front"){
            int elem;
            cin >> elem;
            d.push_front(elem);
        }
        else if(str == "push_back"){
            int elem;
            cin >> elem;
            d.push_back(elem);
        }
        else if(str == "pop_front"){
            if(d.empty()){  cout << -1 << '\n'; }
            else{
                cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if(str == "pop_back"){
            if(d.empty()){  cout << -1 << '\n'; }
            else{
                cout << d.back() << '\n';
                d.pop_back();
            }
        }
        else if(str == "size"){ cout << d.size() << '\n';   }
        else if(str == "empty"){    cout << d.empty() << '\n';    }
        else if(str == "front"){
            if(d.empty()){  cout << -1 << '\n'; }
            else{
                cout << d.front() << '\n';
            }
        }
        else if(str == "back"){
            if(d.empty()){  cout << -1 << '\n'; }
            else{
                cout << d.back() << '\n';
            }
        }
    }
}

