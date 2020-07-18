//
// 10814.cpp
// coding
//
// Created by mooninzoo on 2020-06-14.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * 나이순 정렬
 * stable_sort를 이용하면 marge sort를 사용하기때문에
 * 입력한 순서대로 정렬된다.
 * pair쓰는법
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool compare(pair<int,string> p1, pair<int,string> p2){
    return p1.first < p2.first;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,string>> v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i].first >>v[i].second;
    }
    stable_sort(v.begin(),v.end(),compare);
    for(int i = 0; i <n; i++){
        cout << v[i].first <<' '<< v[i].second <<'\n';
    }
}
