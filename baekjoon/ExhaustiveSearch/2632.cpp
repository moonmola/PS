// PS 2632.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/1/20
/*
 * 피자판매
 * RETRT
 * 어렵다 방법은 알겠는데 머리에서 잘 안굴러감
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX 2001
int sumA[MAX], sumB[MAX];
int m[1000001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int order;
    cin >> order;
    int nsliceA, nsliceB;
    cin >> nsliceA >> nsliceB;
    for (int i = 1; i <= nsliceA; i++) {
        int in;
        cin >> in;
        sumA[i] += in + sumA[i - 1];
        sumA[nsliceA + i] = in;
    }
    for (int i = nsliceA + 1; i < 2 * nsliceA; i++) {
        sumA[i] += sumA[i - 1];
    }
    for (int i = 1; i <= nsliceB; i++) {
        int in;
        cin >> in;
        sumB[i] += in + sumB[i - 1];
        sumB[nsliceB + i] = in;
    }
    for (int i = nsliceB + 1; i < 2 * nsliceB; i++) {
        sumB[i] += sumB[i - 1];
    }
    int cnt = 0;
    for (int i = 0; i < nsliceA; i++) {
        for (int j = 1; j < nsliceA; j++) {
            m[sumA[i + j] - sumA[i]]++;
        }
    }
    m[0]++;
    m[sumA[nsliceA]]++;
    for (int i = 0; i < nsliceB; i++) {
        for (int j = 1; j < nsliceB; j++) {
            if (order - sumB[i + j] + sumB[i] < 0)	continue;
            cnt += m[order - sumB[i + j] + sumB[i]];
        }
    }
    if (order >= sumB[nsliceB]) cnt += m[order - sumB[nsliceB]];
    cnt += m[order];
    cout << cnt << '\n';

    return 0;
}



/*

int main(){
    int s,m,n;
    cin >> s >> m >> n;
    vector<int> A(m);
    vector<int> B(n);
    for(auto& i :A) cin >> i;
    for(auto& i :B) cin >> i;
    vector<int> Asum(1,0);
    vector<int> Bsum(1,0);

    int low = 0, high = 0;
    int sum = 0;
    while (low < A.size())
    {
        sum += A[high++];
        if (sum <= s)
            Asum.push_back(sum);
        else
        {
            low++;
            high = low;
            sum = 0;
        }

        //원형 배열
        if (high == A.size())
            high = 0;
        //전체 다 더한 값 중복 방지
        if ((!low && !high) || high + 1 == low)
        {
            low++;
            high = low;
            sum = 0;
        }
    }
    low = 0, high = 0, sum = 0;
    while (low < B.size())
    {
        sum += B[high++];
        if (sum <= s)
            Bsum.push_back(sum);
        else
        {
            low++;
            high = low;
            sum = 0;
        }

        //원형 배열
        if (high == B.size())
            high = 0;
        //전체 다 더한 값 중복 방지
        if ((!low && !high) || high + 1 == low)
        {
            low++;
            high = low;
            sum = 0;
        }
    }
    sort(Bsum.begin(),Bsum.end());
    int ans = 0;
    for(int i = 0; i <Asum.size(); i++){
        auto upper = upper_bound(Bsum.begin(),Bsum.end(),s-Asum[i]);
        auto lower = lower_bound(Bsum.begin(),Bsum.end(),s-Asum[i]);
        ans+= upper-lower;
    }
    cout << ans;

}*/
