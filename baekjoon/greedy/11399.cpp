// PS 11399.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/13/20

/*
 * ATM
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto& i : vec)  cin >> i;
    sort(vec.begin(),vec.end());
    int ans = 0, accu=0;
    for(auto i :vec){
        accu+=i;
        ans+=accu;
    }
    cout << ans;
}

