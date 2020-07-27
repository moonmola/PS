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
 * string은 1차원 배열의 형태이기 때문에 중간에 원소를 껴넣거나 제거하는 것이 O(길이)의 시간이 걸린다
 * 따라서 작업을 O(1)에 할 수 있도록 링크드리스트(list STL)을 사용
 */

#include <iostream>
#include <string>
#include <list>
using namespace std;

/*
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int N;
    cin >> str;
    cin >> N;
    string::iterator iter = str.end();

    for(int i = 0; i < N; i++){
        char command;
        cin >> command;
        if(command == 'P'){
            char elem;
            cin >> elem;
            str.insert(iter,1,elem);
            iter++;

        }
        else if(command == 'L'){
            if(iter!=str.begin())   iter--;
        }
        else if (command == 'D'){
            if(iter!=str.end()) iter++;
        }
        else if(command == 'B') {
            if(iter!= str.begin()) {
                str.erase(iter-1);
                iter--;
            }
        }
//        cout << cursor << ':' << str << endl;
    }
    cout << str;
}
 */

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
