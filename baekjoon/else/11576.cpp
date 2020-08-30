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
    int num_10=0;
    cin >> A >> B;
    cin >> A_num;
    vector<string> A_vec(A_num);
    for(int i = 0; i < A_num;i++)   cin >> A_vec[i];
    for(int i = 0; i < A_num; i++){
        num_10 += (stoi(A_vec[i]))*pow(A,A_vec.size()-i-1);

    }
    vector<int> result;
    while(num_10){
        result.push_back(num_10%B);
        num_10 = num_10/B;
    }
    reverse(result.begin(),result.end());
    for(auto elem : result) cout<< elem << " ";

}
