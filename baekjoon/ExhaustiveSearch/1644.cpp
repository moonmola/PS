// PS 1644.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/25/20
/*
 * 소수의 연속합
 */
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<bool> v(n+1,1);
    for(int i = 2; i <= n; i++){
        for(int j = 2; i*j <= n; j++){
            v[i*j] = false;
        }
    }
    vector<int> arr;
    for(int i = 2; i <=n; i++){
        if(v[i])    arr.push_back(i);
    }
    int start = 0, end = 0, ans = 0,num=0;
    while(start<=end){
        if(num>=n){
            if(num == n)    ans++;
            num -= arr[start++];
        }
        else if(end == arr.size())   break;
        else    num += arr[end++];
    }
    cout << ans;
}
