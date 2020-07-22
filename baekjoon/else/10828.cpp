//
// 10828.cpp
// coding
//
// Created by mooninzoo on 2020-07-19.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * 스택
 */
#include <string>
#include <iostream>
using namespace std;
class Stack{
    int top, MaxSize;
    int* stack;
public:
    Stack(int _MaxSize){
        MaxSize = _MaxSize;
        stack = new int [MaxSize];
        top = -1;
    }

    void push(int elem){
        if(top==MaxSize-1){}
        else    stack[++top] = elem;
    }
    void pop(){
        if(top<0)  cout << -1 <<'\n';
        else{
            cout << stack[top] << '\n';
            top--;
        }
    }
    void isEmpty(){
        if(top <0) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    void size(){
        cout << top+1 << '\n';
    }
    void top_print(){
        if(top<0)  cout << -1 <<'\n';
        else{
            cout << stack[top] << '\n';
        }
    }


};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Stack st(10000);
    int test_case;
    cin >> test_case;
    for(int i = 0;i <test_case; i++){
        string command;
        cin >> command;
        if(command == "push"){
            int elem;
            cin >> elem;
            st.push(elem);
        }
        else if(command == "pop")   st.pop();
        else if(command =="size")   st.size();
        else if(command =="empty")  st.isEmpty();
        else if(command =="top")  st.top_print();
    }



}

