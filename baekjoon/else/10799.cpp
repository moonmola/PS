//
// 10799.cpp
// coding
//
// Created by mooninzoo on 2020-07-24.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 쇠막대기
 * 경우의수를 생각해서 한건데 시간이 조금 오래걸리는듯?
 * 시간 단축 케이스를 찾아보자
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string input;
    cin >> input;

    vector<int> bar;
    vector<int> index;
    int result = 0;
    for(int i = 0; i <input.size();i++){
        if(input[i] == '('){
            if(input[i+1] == ')'){
                for(int j = 0; j <index.size(); j++){
                    bar[index[j]]++;
                }
                i++;
            }
            else{
                bar.push_back(0);
                index.push_back(bar.size()-1);
            }
        }
        else{
            result += bar[index[index.size()-1]]+1;
            index.pop_back();
        }

    }
    cout << result << '\n';

}

