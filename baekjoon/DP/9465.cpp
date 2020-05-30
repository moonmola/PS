//
// 9465.cpp
// coding
//
// Created by mooninzoo on 2020-05-27.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 스티커
 * dp[n][i]를 n번째 줄의 i번째 까지 얻을 수 있는 최고의 점수
 * dp[0][1] = arr[0][1], dp[1][1] = arr[1][1]] 로 초기화
 */
#include <iostream>
using namespace std;

int main(){
    int test_case;
    cin >> test_case;
    for(int t = 0; t < test_case; t++){
        int n;
        cin >> n;
        int arr[2][n];
        for(int i = 0; i <2; i++){
            for(int j = 0; j <n; j++)
                cin >> arr[i][j];
        }
        int dp[2][n];
        dp[0][0] = arr[0][0];
        dp[1][0] = arr[1][0];
        dp[0][1] = dp[1][0] + arr[0][1];
        dp[1][1] = dp[0][0] + arr[1][1];
        for(int j = 2; j <n; j++) {

            dp[0][j] = max(dp[1][j-1] + arr[0][j], dp[1][j-2] + arr[0][j]);
            dp[1][j] = max(dp[0][j-1] + arr[1][j], dp[0][j-2] + arr[1][j]);
        }
        cout << max(dp[0][n-1],dp[1][n-1])<<endl;//endl안해서 틀렸습니다 떴음
    }
}



/* 그냥 풀었음,, 시간,,초과,,,,,,,,,,
#include <iostream>
using namespace std;
int main(){
    int test_case;
    cin >> test_case;
    for(int t = 0; t < test_case; t++) {
        int n;
        cin >> n;
        int dp[2][n];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++)
                cin >> dp[i][j];
        }
        int result = 0;
        while(1){
            int max_i = 0;
            int max_j = 0;
            int max = -1;
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < n; j++){
                    if(max <dp[i][j]) {
                        max = dp[i][j];
                        max_i = i;
                        max_j = j;
                    }
                }
            }
            result += max;
            if(max == 0)
                break;
            dp[max_i][max_j] = 0;
            if(max_i != 1)  dp[max_i+1][max_j] = 0;
            if(max_i != 0)  dp[max_i-1][max_j] = 0;
            if(max_j != n-1)  dp[max_i][max_j+1] = 0;
            if(max_j != 0)  dp[max_i][max_j-1] = 0;

        }
        cout << result << endl;
    }

}
 */