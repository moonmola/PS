// PS 6603.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/24/20
/*
 * 로또
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int k;
    while(1) {
        cin >> k;
        if(k == 0)  break;
        vector<int> v(k);
        for(auto& i : v)    cin >> i;
        vector<int> ind;
        for(int i = 0; i < 6; i++)    ind.push_back(0);
        for(int i = 0; i < k-6; i++)    ind.push_back(1);
        do {
            for(int i = 0; i < k; i++){
                if(!ind[i]){
                    cout << v[i] << ' ';
                }
            }
            cout <<'\n';

        }while (next_permutation(ind.begin(), ind.end()));
        cout << '\n';

    }
}