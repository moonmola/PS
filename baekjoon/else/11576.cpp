//
// 11576.cpp
// PS
//
// Created by mooninzoo on 8/27/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * Base Conversion
 */

#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int A,B,A_num;
    cin >> A >> B;
    cin >> A_num;
    vector<string> A_vec(A_num);
    for(int i = 0; i < A_num;i++)   cin >> A_vec[i];
    for(int i = 0; i < A_num; i++){
        int num_10=0;
        for(int j = 0; j < A_vec[i].size(); j++){
            num_10 += (A_vec[i][j]-'0')*pow(A,A_vec[i].size()-j-1);
        }
        string result;
        while(num_10){
            result.push_back(num_10%B+'0');
            num_10 = num_10/B;
        }
        reverse(result.begin(),result.end());
        cout << result << endl;
    }


}
