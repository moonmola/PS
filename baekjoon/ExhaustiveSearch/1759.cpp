// PS 1759.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/23/20
/*
 * 암호 만들기
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int l, c;
    cin >> l >> c;
    vector<char> vec(c);
    vector<vector<char>> ans;
    for(auto& i : vec)  cin >> i;

    vector<int> ind;
    for(int i = 0; i < c-l; i++)    ind.push_back(0);
    for(int i = 0; i < l; i++)  ind.push_back(1);
    do{
        int cons=0,vowel=0;
        vector<char> temp;
        for(int i = 0; i <c; i++){
            if(ind[i]==1) {
                if(vec[i] == 'a' ||vec[i] == 'e'||vec[i] == 'i'||vec[i] == 'o'||vec[i] == 'u'){
                    vowel++;
                }
                else    cons++;

                temp.push_back(vec[i]);
            }
        }
        if(vowel >=1 && cons >=2){
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
        }

    }while (next_permutation(ind.begin(),ind.end()));
    sort(ans.begin(),ans.end());
    for(auto elem : ans){
        for(auto i : elem){
            cout << i;
        }
        cout << '\n';
    }



}
