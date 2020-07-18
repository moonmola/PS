//
// 10989.cpp
// coding
//
// Created by mooninzoo on 2020-07-16.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 수 정렬하기3
 * int형 변수하나가 4byte이고 수의 개수가 10000000개의 범위를 갖고 있으므로
 * 모든 범위를 사용하면 40MB가 된다
 * 메모리 제한은 8MB이므로 입력받은 수의 범위 10000과 같은 배열을 만든다
 * 시간제한 문제를 풀때는 scanf와 printf를 쓰는게 좋다
 * 근데 scanf, printf 쓰는것보다 cin시간 줄여주는게 시간단축효과가 더 좋네
 */
#include <iostream>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int arr[10001] = {0, };
    int temp;
    for(int i = 0; i < n; i ++){
        scanf("%d",&temp);
        arr[temp]++;
    }
    for(int i = 1; i < 10001; i++){
        for(int j = 0; j < arr[i];j++)
            printf("%d\n",i);
    }
}


/*
int main(){
    ios::sync_with_stdio(false); // cin의 시간을 줄여주기 위해 사용
    //싱글 쓰레드 환경에서만 사용(실무에서 사용x) 알고리즘 풀때만 사용
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[10001] = {0, };
    int temp;
    for(int i = 0; i < n; i ++){
        cin >> temp;
        arr[temp]++;
    }
    for(int i = 1; i < 10001; i++){
        for(int j = 0; j < arr[i];j++)
            cout << i << '\n';
    }
}
 */
