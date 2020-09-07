//
// 10816.cpp
// PS
//
// Created by mooninzoo on 9/7/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 숫자 카드2
 * RETRY
 * 이진탐색 기반
 * lower_bound
 * key와 크거나 같은 첫번째 원소
 * upper_bound
 * key값을 초과하는 가장 첫번째 요소
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

int n,m;
vector<ll> card;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    card = vector<ll>(n);
    for(auto& i : card) cin>>i;
    sort(card.begin(),card.end());
    cin>>m;

    for(int i = 0; i < m; i++){
        ll temp;
        cin >> temp;
        auto low= lower_bound(card.begin(),card.end(),temp)-card.begin();
        auto high = upper_bound(card.begin(),card.end(),temp)-card.begin();
        cout<< high-low << ' ';


    }
    return 0;
}
