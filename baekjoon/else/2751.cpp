//
// 2751.cpp
// coding
//
// Created by mooninzoo on 2020-06-08.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 *  수 정렬하기 2
 *  시간초과
 *  시간 복잡도가 nlogn인 알고리즘 사용해야함
 *
 *  printf, scanf 쓰면 시간이 줄어들어서 그냥 사용해도됨
 */
#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    int* arr = new int [n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    for(int i = 0; i<n; i++){
        printf("%d\n",arr[i]);
    }
}
