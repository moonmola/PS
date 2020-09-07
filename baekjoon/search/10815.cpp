//
// 10815.cpp
// PS
//
// Created by mooninzoo on 9/7/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 숫자 카드
 * RETRY
 * binary search의 함수를 쓸수있는지 보는문제
 */
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;
int n,m;
vector<ll> card;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

     cin >> n;
     card = vector<ll>(n);
     for(auto& i : card) cin >> i;
     sort(card.begin(),card.end());

     cin >> m;
     for(int i = 0; i < m; i++){
         ll temp;
         cin >> temp;
         cout << binary_search(card.begin(),card.end(),temp)<<'\n';
     }
    return 0;

}


/* 직접 바이너리 서치 했음 맞긴 맞았음
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
int n,m;
vector<ll> card;
vector<ll> compare;
bool search(ll num,ll start, ll end){
    while(start<=end) {
        ll mid = (start + end) / 2;
        if (card[mid] >num)
            end = mid-1;
        else if(card[mid] == num)
            return true;
        else//mid<num
            start = mid+1;
    }
    return false;
}

int main(){
    cin >> n;
    card = vector<ll>(n);
    for(auto& i:card) cin>>i;
    cin >> m;
    compare = vector<ll>(m);
    for(auto& i:compare) cin>>i;
    sort(card.begin(),card.end());
    for(auto& i :compare)
        cout << search(i,0,n-1)<<'\n';
    return 0;
}*/
