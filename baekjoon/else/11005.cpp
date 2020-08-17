//
// 11005.cpp
// PS
//
// Created by mooninzoo on 8/17/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * 진법 변환 2
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,b;
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    cin >> n >> b;
    vector<int> result;
    while(n){
        result.push_back(n-(n/b)*b);
        n = n/b;
    }
    reverse(result.begin(),result.end());
    for(auto elem: result){
        if(elem>9)  cout<<(char)(elem+55);
        else cout << elem;
    }
}
