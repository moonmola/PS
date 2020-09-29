// PS 1208.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/26/20
/*
 * 부분수열의 합2
 * RETRY
 *      -----------
 *      mid = n/2;
 *      v.resize(n);
 *      ---------------
 *      mid = n/2;  v.resize(n);
 *      ----------------
 *      두개 속도가 다르다니 충격적이다
 * 이거 짱 어렵
 */
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
vector<int> v;
int n,s, mid;
long long ans;
map<int, int> mp;

void dfsLeft(int idx, int sum){
    if (idx == mid){
        mp[sum]++; return;
    }
    dfsLeft(idx+1,sum);
    dfsLeft(idx+1,sum+v[idx]);
}
void dfsRight(int idx, int sum){
    if(idx == n){
        ans+= mp[s-sum]; return;
    }
    dfsRight(idx+1,sum);
    dfsRight(idx+1,sum+v[idx]);
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> s;
    mid = n/2;
    v.resize(n);
    for(int i=0; i<n; i++) cin >> v[i];
    dfsLeft(0,0);
    dfsRight(mid,0);
    if(s==0) ans--;
    cout << ans;
}