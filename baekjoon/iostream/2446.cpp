// PS 2446.cpp
// Copyright (c) 2021 moonmola. All rights reserved. 2021/08/26

#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    num = 2*num-1;
    int star_num = num;
    int blank_num = 0;
    for(int i = 0; i <num; i++){
        for(int j = 0; j < blank_num; j++){
            cout << " ";
        }
        for(int j = 0; j < star_num; j++){
            cout << "*";
        }
        if(i!=num-1)    cout <<" "<< endl;
        if(i<num/2){
            star_num -= 2;
            blank_num++;
        } else {
            star_num +=2;
            blank_num--;
        }
    }
}

