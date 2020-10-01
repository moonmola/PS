// PS 7453.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/30/20
/*
 * 합이 0인 네 정수
 * RETRY
 * 어려워..
 */
#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 4001
using namespace std;
long long AB[MAX * MAX], CD[MAX * MAX];
int main(){
    int n;
    cin >> n;
    vector<long> A(n);
    vector<long> B(n);
    vector<long> C(n);
    vector<long> D(n);
    for(int i = 0; i < n; i++) cin >> A[i] >> B[i] >> C[i]>> D[i];
    int idx = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            AB[idx] = A[i] + B[j];
            CD[idx++] = C[i] + D[j];
        }
    }
    sort(CD,CD+n*n); // BinarySearch로 찾을 기준 배열만 정렬

    long long cnt = 0;
    long left = 0, right = n*n ;
    for(int i = 0; i < n*n; i++){
        while(left<right){
            long long mid = (left+right) /2;
            if(AB[i] + CD[mid] < 0) left = mid+1;
            else right = mid;
        }
        long lower_bound = right;
        left = 0, right =n*n;
        while(left < right){
            long long mid = (left+right)/2;
            if(AB[i] + CD[mid] <=0) left = mid+1;
            else right = mid;
        }
        long upper_bound = right;
        cnt += upper_bound-lower_bound;
        left = 0,right=n*n;
    }
    cout << cnt;

}
