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
 * 모르겠다 일단 넘겨
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,s;
    cin >>n>>s;
    int A[20];
    int B[20];

    int a_size = n/2;
    int b_size = n-a_size;
    for(int i = 0; i < a_size;i++)  cin >> A[i];
    for(int i = 0; i < b_size;i++)  cin >> B[i];

    vector<int> a;
    vector<int> b;
    //비트연산자로 부분집합 더하기
    for(int i= 0; i < (1<<a_size); i++){
        int sum = 0;
        for(int k = 0; k < a_size; k++){
            if(i&(1<<k))    sum+=A[k];//i의 k번째 비트가 0인지 1인지 검사
        }
        a.push_back(sum);
    }
    for(int i= 0; i < (1<<b_size); i++){
        int sum = 0;
        for(int k = 0; k < b_size; k++){
            if(i&(1<<k))    sum+=B[k];
        }
        b.push_back(sum);
    }
    sort(a.begin(), a.end());
    sort(b.begin(),b.end());

    long long ans = 0;
    for(int i = 0; i < b.size(); i++){
        int temp = s-b[i];
        auto hi = upper_bound(a.begin(),a.end(), temp); //초과
        auto lo = lower_bound(a.begin(), a.end(), temp);//크거나 같은
        ans += hi-lo;
    }
    if(s==0) ans--;
    cout << ans;



}



/*
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
}*/
