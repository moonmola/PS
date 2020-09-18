// PS 9095.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/18/20
/*
 * 1,2,3더하기
 * RETRY
 */
#include <iostream>
using namespace std;
int n;
int findSum(int curr){
    if(curr > n)
        return 0;
    if(curr==n)
        return 1;
    return findSum(curr+1)+findSum(curr+2)+findSum(curr+3);
}

int main(){
    int T;
    cin >> T;
    for(int t = 0; t<T; t++){
        cin >> n;
        cout << findSum(0) << endl;
    }
}

