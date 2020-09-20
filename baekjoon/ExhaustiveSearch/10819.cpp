// PS 10819.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/20/20
/*
 * 차이를 최대로
 * RETRY
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto& i :vec)   cin >> i;
    sort(vec.begin(),vec.end());
    int ans = 0;
    do {
        int temp=0;
        for(int i = 0; i < n-1; i++){
            temp+=abs(vec[i]-vec[i+1]);
        }
        ans= max(ans,temp);
    }while (next_permutation(vec.begin(),vec.end()));
    cout << ans;

}