//
// 2751.cpp
// coding
//
// Created by mooninzoo on 2020-06-08.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 *  수 정렬하기 2
 *  sort = 시간 복잡도가 nlogn인 알고리즘 사용해야함
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto& i : v)    cin >> i;
    sort(v.begin(),v.end());
    for(auto& i : v)    cout << i<<'\n';
}