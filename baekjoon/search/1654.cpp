//
// 1654.cpp
// PS
//
// Created by mooninzoo on 9/7/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 랜선 자르기
 * RETRY
 * 전선의 길이가 key값으로 이분탐색
 * *주의*
 * 이진 탐색 과정에서 변수들이 int형의 범위를 초과하는 경우가 나온다. 이 경우 오버플로우가 일어나 값이 왜곡되므로 long long형을 써야한다.
 * 처음에 X에 대해 이진 탐색을 시행할 때 탐색 범위는 1부터 시작해야한다. 특정 X에서 랜선의 개수를 구하는 과정에서 0으로 나눗셈을 하여 런타임 에러가 일어날 수 있다.
 *
 */
#include <algorithm>
#include <iostream>
using namespace std;
long long K,N;
long long line[10001];
bool possible(long long len){
    long long cnt = 0;
    for(long long i = 0; i < K; i++)
        cnt += line[i]/len;
    if(cnt>=N)
        return true;
    return false;

}

int main(){
    cin >> K >> N;
    long long high = 0;
    for(long long i= 0; i< K; i++){
        cin >> line[i];
        high = max(high,line[i]);
    }
    long long result = 0;
    long long low = 1;
    while(low<= high){
        long long mid = (low + high)/2;
        if(possible(mid)){
            if(result < mid)
                result = mid;
            low = mid+1;
        }
        else
            high = mid -1;
    }
    cout << result << '\n';
    return 0;
}
