// PS 10971.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/20/20
/*
 * 외판원 순회 2
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> w[n];
    for(int i = 0; i <n; i++){
        w[i] = vector<int> (n);
        for(auto& j : w[i])   cin >> j;
    }

    vector<int> vec;
    int ans = 1e9;
    for(int i = 0; i <n;i++) vec.push_back(i);
    do {
        bool flag = true;
        int temp = 0;
        for(int i = 0; i < n-1; i++){
            temp += w[vec[i]][vec[i+1]];
            if (w[vec[i]][vec[i+1]] ==0){
                flag=false;
                break;
            }
        }
        temp+= w[vec[n-1]][vec[0]];
        if (w[vec[n-1]][vec[0]] ==0){
            flag=false;
        }
        if(flag)    ans = min(temp,ans);
    }while (next_permutation(vec.begin(),vec.end()));
    cout << ans;
}
