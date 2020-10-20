//
// 11054.cpp
// PS
//
// Created by mooninzoo on 2020-06-02.
// Copyright (c) 2020 mooninzoo. All rights reserved
/*
 * 가장 긴 바이토닉 부분 수열
 */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,ans=0;
    cin >> n;
    vector<int> v(n);
    vector<int> dp1(n,1);
    vector<int> dp2(n,1);
    for(int i = 0; i < n; i++)  cin>> v[i];
    for(int i = 0;i<n; i++) {
        for (int j = 0; j < i; j++) {
            if (v[i] > v[j]) {
                dp1[i] = max(dp1[i], dp1[j] + 1);
            }
        }
    }
    for(int i = n-1;i>=0; i--){
        for(int j = n-1; j >i; j--){
            if(v[i]>v[j]){
                dp2[i] = max(dp2[i],dp2[j]+1);
            }
        }
    }
    for(int i = 0; i < n; i++)  ans = max(ans,dp1[i]+dp2[i]-1);
    cout << ans <<'\n';
}