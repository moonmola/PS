//
// 2805.cpp
// PS
//
// Created by mooninzoo on 9/7/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 나무 자르기
 * 무슨 저런 절단기가 있어요ㅠㅠㅠ
 * 이분검색할때는 걍 다 longlong하기
 */
#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
long long tree[1000001];
bool possible(int num){
    long long cnt=0;
    for(int i = 0; i < n; i++){
        if(tree[i]>num)
            cnt += tree[i]-num;
    }
    if(cnt>=m)
        return true;
    return false;
}

int main(){
    cin >> n >> m;
    long long high=0;
    for(int i = 0; i < n ; i++){
        cin >> tree[i];
        high = max(tree[i],high);
    }
    long long low = 1;
    long long result = 0;
    while(low<=high){
        long long mid = (low+high)/2;
        if(possible(mid)){
            if(result <= mid)
                result = mid;
            low = mid+1;
        }
        else
            high = mid-1;
    }
    cout << result;
    return 0;
}