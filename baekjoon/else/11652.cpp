//
// 11652.cpp
// coding
//
// Created by mooninzoo on 2020-07-16.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 카드
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long int* arr = new long long int [n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int ans_cnt = 1;
    int cnt=1;
    long long ans = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]== arr[i-1])
            cnt++;
        else
            cnt=1;
        if(ans_cnt<cnt) {
            ans_cnt = cnt;
            ans=arr[i];
        }

    }
    cout << ans << '\n';


}

