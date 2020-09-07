//
// 2110.cpp
// PS
//
// Created by mooninzoo on 9/7/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 공유기 설치
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,c;
long long answer;
vector<long long> house;

void search(long long start, long long end){
    if(start>end) return;
    long long mid = (start+end)/2;
    long long cnt = 0;
    long long temp = 0;
    for(int i = 0; i < n-1; i++){
        temp += house[i+1]-house[i];
        if(temp >= mid){
            cnt++;
            temp=0;
        }
    }
    if(cnt >=c-1){
        answer = max(answer,mid);
        search(mid+1,end);
    }
    else    search(start,mid-1);

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> c;
    house = vector<long long>(n);

    for(auto& i:house)  cin>>i;
    sort(house.begin(),house.end());
    long long end= house[n-1];
    search(1,end);
    cout << answer;
}