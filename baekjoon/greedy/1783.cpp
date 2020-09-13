//
// 1783.cpp
// PS
//
// Created by mooninzoo on 9/12/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 병든 나이트
 * RETRY
 */

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    if(n==1)
        cout << 1 << '\n';
    else if(n==2)
        cout << min(4,(m+1)/2);
    else if(n>=3){
        if(m<=6)
            cout << min(4,m);
        else
            cout << m-2;
    }
}
