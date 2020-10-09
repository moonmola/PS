// PS 위장.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/9/20
/*
 * RETRY
 */

#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


int solution(vector<vector<string>> clothes) {

    int answer = 1;

    map<string,int> m;
    for(auto elem : clothes){
        m[elem[1]]++;
    }
    vector<int> v;
    for(auto& elem : m){
        v.push_back(elem.second);
    }
    for(auto& elem: m){
        answer *=elem.second+1;
    }

    return --answer;
}

