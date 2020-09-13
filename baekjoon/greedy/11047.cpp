//
// 11047.cpp
// PS
//
// Created by mooninzoo on 9/12/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 동전 0
 * RETRY
 * 그리디 : 최적해를 구하는 데에 사용되는 근사적인 방법
 * 그순간 최적이라고 생각되는것을 선택
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cmp(int a, int b){
    return a>b;
}
int main(){
    int n, k, ans=0;
    cin >> n>> k;
    vector<int> v(n);
    for(auto& i: v) cin >> i;
    sort(v.begin(),v.end(),cmp);
    for(int i = 0; i < n ; i++){
        while(k-v[i]>=0){
            ans++;
            k-=v[i];
        }
    }
    cout << ans << '\n';
}