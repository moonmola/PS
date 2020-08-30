//
// 1978.cpp
// PS
//
// Created by mooninzoo on 8/29/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 소수 찾기
 */
#include <iostream>
using namespace std;

int main(){
    int n;
    int result = 0;
    cin >> n;
    int arr[100];
    for(int i  = 0; i < n; i++) {
        int count = 0;
        cin >> arr[i];
        for(int j = 1; j <=arr[i]; j++){
            if(arr[i] % j == 0) count++;
        }
        if(count==2)    result++;
    }
    cout<<result;
    return 0;

}

