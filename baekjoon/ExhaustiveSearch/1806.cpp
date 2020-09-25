// PS 1806.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/25/20
/*
 * 부분합
 * RETRY
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,s;
    cin >> n >> s;
    vector<int> a(n);
    for(auto& i : a)    cin >>i;
    int ans = 1e9;
    int start = 0, end = 0, sum = 0;
    while (start <= end) {
        if (sum >= s) {	// 현재 포인터의 합이 s보다 크거나 같으면 start ++
            ans = min(ans,end - start);	// 가장 짧은 길이만 저장
            sum -= a[start++];
        }
        else if (end == n) break;
        else sum += a[end++];	// end++ 함으로써 sum 증가
    }
    if(ans == 1e9)  cout << 0;
    else    cout << ans;
}

