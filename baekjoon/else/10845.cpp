//
// 10845.cpp
// coding
//
// Created by mooninzoo on 2020-07-25.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * 큐
 *
 */
#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    int N;
    cin >> N;
    string input;
    for(int i =0; i<N; i++){
        cin >> input;
        if(input == "push"){
            int elem;
            cin >> elem;
            q.push(elem);
        }
        else if(input == "pop"){
            if(q.empty()){  cout << -1 << '\n';}
            else{
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(input == "size"){   cout << q.size() << '\n';  }
        else if(input == "empty"){  cout << q.empty() << '\n'; }
        else if(input == "front") {
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.front() << '\n';
        }
        else if(input == "back"){
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.back() << '\n';
        }

    }
}
