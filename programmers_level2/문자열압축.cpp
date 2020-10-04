// PS 문자열압축.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/4/20
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

#define K_MAX 10000

int main() {
    int n; scanf("%d", &n);
    int k; scanf("%d", &k);
    int dp[10001] = {0, }; // 개수저장
    vector<int> coin;
    int num;
    for (int i=0; i<n; i++) {
        scanf("%d", &num);
        coin.push_back(num);
        dp[num] = 1;
    }

    // 정렬하고 중복제거
    sort(coin.begin(), coin.end());
    coin.erase(unique(coin.begin(), coin.end()), coin.end());

    int minimum;
    int temp;
    for (int i=1; i<coin[0]; i++) dp[i] = -1;
    for (int i=coin[0]; i<=k; i++) {
        minimum = K_MAX; // 초기화
        if (dp[i] > 0) continue;
        for (int j=0; j<n; j++) {
            if (coin[j] > i) break;
            if (dp[i-coin[j]] == -1) continue;
            temp = dp[i-coin[j]] + dp[coin[j]];
            minimum = min(minimum, temp);
        }
        dp[i] = dp[i] == K_MAX ? -1 : minimum;
    }

    printf("%d", dp[k]);
    return 0;
}


/*
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = s.size();
    for(int num = 1; num <= s.size()/2; num++){
        int cur_ans = 0;
        string str;
        int temp = 0;
        for(int i = 0; i < s.size(); i=i+num){
            string curr = s.substr(i,num);
            int next = i+num;
            if(curr == s.substr(next,num)){
                temp++;
            }
            else{
                str = s.substr(i,num);
                if(temp>0){
                    cur_ans += num+1;
                }
                else cur_ans +=num;
            }
        }
//        if(str!=)
        answer = min(answer,cur_ans);
    }
    return answer;
}
int main(){
    string s = "aabbaccc";
    cout << solution(s);
}
*/
