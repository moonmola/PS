//
// 9613.cpp
// coding
//
// Created by mooninzoo on 8/1/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * GCD 합
 * 잘못했다 여러개의 수에서 gcd인줄 알았는데
 * 각 테스트 케이스마다 가능한 모든 쌍의 gcd의 합이다
 * sum에서 longlong안해서 틀림
 * longlong!!!!!!!!!
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int r= a%b;
        a=b;
        b=r;
    }
    return a;
}
long long sum_gcd(vector<int> vec){
    long long sum = 0;
    for(int i = 0; i < vec.size(); i++){
        for(int j = i+1; j<vec.size(); j++){
            sum  += gcd(vec[i],vec[j]);
        }
    }
    return sum;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        int k;
        cin >> k;
        vector<int> vec(k);
        for(int j = 0; j < k ;j++){
            cin >> vec[j];
        }
        cout << sum_gcd(vec) << '\n';
    }
}






/*
void swap(int& a, int&b){
    int temp = a;
    a=b;
    b = temp;
}
int gcd(int a, int b){
    if(a<b) swap(a,b);
    while( b!= 0 ){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a, int b){
    return a*b/gcd(a,b);
}
int multi_gcd(vector<int> vec){
    int cur=gcd(vec[0],vec[1]);
    for(int i = 2; i < vec.size(); i++){
        cur = gcd(cur,vec[i]);
    }
    return cur;

};



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        int k;
        cin >> k;
        vector<int> vec(k);
        for(int j = 0; j < k ;j++){
            cin >> vec[j];
        }
        cout << multi_gcd(vec) << '\n';

    }
}
 */