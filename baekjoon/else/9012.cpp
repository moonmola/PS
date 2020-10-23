//
// 9012.cpp
// coding
//
// Created by mooninzoo on 2020-07-23.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 괄호
 * 맞았다!
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int left =0, right =0,t;
    string brac;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> brac;
//        cout << brac.size() << endl;
        for(int j = 0; j <brac.size();j++){
            if(brac[j] == '('){
                left++;
//                cout << '(';
            }
            else{
                if(left<=right) {
                    left = -1;
                    break;
                }
                right++;
//                cout << ')';
            }
        }
        if(left == right)
            cout << "YES" <<'\n';
        else
            cout << "NO" <<'\n';
        left =0;
        right =0;

    }


}
