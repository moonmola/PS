// PS 2003.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/25/20
/*
 * 수들의 합
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(auto& i : a)    cin >>i;
    int ans = 0;
    for(int i = 0; i <n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum += a[j];
            if(sum==m) {
                ans++;
                break;
            }
        }
    }
    cout << ans;
}
