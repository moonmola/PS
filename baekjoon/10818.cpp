//
// 10818.cpp
// coding
//
// Created by mooninzoo on 2020-05-20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vec;
    int N, temp;
    cin >> N;
    for(int i = 0 ;i < N; i ++){
        cin >> temp;
        vec.push_back(temp);
    }
    cout <<*min_element(vec.begin(), vec.end())<<' '<< *max_element(vec.begin(), vec.end()) ;
}


