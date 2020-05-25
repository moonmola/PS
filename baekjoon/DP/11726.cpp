//
// 11726.cpp
// coding
//
// Created by mooninzoo on 2020-05-23.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
#include <iostream>
#include <vector>
using namespace std;
//DP(retry)
//앞의 타일이 1개 세로로 있을 경우, 앞에 타일이 2개 가로로 있을 경우를 더하면 된다
//경우의 수를 해보고 점화식 생각하기

int dp(int* d, int n){
    d[1] = 1;
    d[2] = 2;
    for(int i = 3; i <=n ; i++) d[i] = (d[i-1]+d[i-2]) %10007;
    //연산할때마다 10007로 나눈 나머지를 저장
    return d[n];
}
int main(){
    int n;
    cin >> n;
    int d[n+1];
    cout << dp(d,n);

    return 0;
}


/*
 * 그냥 무작정 코딩으로 했을때 60까지는 된다..ㅎ
 * 숫자가 너무 커져서 안된다
 *
//1과 2로 구성된 합이 n인 배열 의 갯수
//같은 것이 있는 순열 = n개 중 같은 것이 각각 p개, q개씩 있을때 n개를 모두 택하여 일렬로 배열하는 순열의 수
long long int factorial(int num1, int num2, int num3){
    vector<int> vec1, vec2, vec3;
    //num3가 0인경우 erase와 나누기에서 오류나므로 1로 바꿔준다
    if(num3==0)
        num3=1;
    //num들의 벡터 만들기
    for(int i = 1 ; i <= num1; i++){
        vec1.push_back(i);
        if(i<=num2) vec2.push_back(i);
        if(i<=num3) vec3.push_back(i);
    }
    //num벡터에서 서로서로 중복값 다 없애기
    vector<int>::iterator iter_a;
    vector<int>::iterator iter_b;
    vector<int>::iterator iter_a2;
    for (iter_a = vec1.begin(); iter_a != vec1.end();) {
        iter_a2 = iter_a;
        for (iter_b = vec2.begin(); iter_b != vec2.end();) {
            if (*iter_a == *iter_b) {
                iter_b = vec2.erase(iter_b); //중복 제거
                iter_a = vec1.erase(iter_a);
            } else
                iter_b++;
        }
        if(vec1.size() ==0)
            break;
        if (iter_a == iter_a2)
            iter_a++;
    }

    for (iter_a = vec1.begin(); iter_a != vec1.end();) {
        iter_a2 = iter_a;
        for (iter_b = vec3.begin(); iter_b != vec3.end();) {
            if (*iter_a == *iter_b) {
                iter_b = vec3.erase(iter_b); //중복 제거
                iter_a = vec1.erase(iter_a);
            } else
                iter_b++;
        }
        if (iter_a == iter_a2)
            iter_a++;
    }
    //팩토리얼값 계산
    long long int result = 1;
    for(auto elem : vec1)
        result *= elem;
    for(auto elem : vec2)
        result /= elem;
    for(auto elem : vec3) {
        result /= elem;
    }
    return result;
}
int main(){
    int n;
    cin >> n;
    int div_num = n/2;
    long long int count = 1;
    for(int i = 1; i <= div_num; i++){
        int p = n-i*2;
        int num = i+p;
        count += factorial(num,i,p);
        cout << count <<endl;
    }
    cout << count%10007;
}
 */