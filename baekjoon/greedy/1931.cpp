// PS 1931.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/13/20

/*
 * 회의실 배정
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second){
        return a.second<b.second;
    }
    return a.first<b.first;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >>n;
    vector<pair<int,int>> vec(n);
    for(auto& i : vec)  cin>>i.first>>i.second;
    sort(vec.begin(),vec.end(), cmp);
    int end = vec[0].second;
    int ans = 1;
    for(int i = 1; i < vec.size();i++){
        if(vec[i].first>=end){
            end = vec[i].second;
            ans++;
        }
    }
    cout << ans;
}