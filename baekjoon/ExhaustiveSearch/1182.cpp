// PS 1182.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/25/20
/*
 * 부분수열의 합
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 20
int n,s;
int a[MAX];

int main(){
    cin >> n >> s;
    for(int i = 0; i < n; i++)    cin >>a[i];
    vector<int> ind(n,1);
    int ans = 0;
    for(int i = 0; i < n; i++){
        ind[i]=0;
        do {
            int temp=0;
            for(int j = 0; j < n; j++){
                if(!ind[j]){
                    temp+=a[j];
                }
            }
            if(temp == s)
                ans++;
        }while (next_permutation(ind.begin(),ind.end()));
    }
    cout<< ans;


}


