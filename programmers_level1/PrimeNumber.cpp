//
// Created by 문인주 on 2020-03-10.
//

//programmgers level1 소수찾기

//best soultion 다시 확인하기
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> tmp(n+1, true);

    for (int i=2; i<n+1; i++) {
        if (tmp[i] == true) {
            for (int j=2; i*j<n+1; j++) tmp[i*j] = false;
            answer++;
        }
    }

    return answer;
}
/* mysolution 시간초과
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 2; i <=n; i++)
    {
        for(int j = i-1; j >1; j--)
        {
            if(i%j ==0)
            {
                break;
            }
            if(j==2)
            {
                answer++;
            }
        }
    }
    answer++;
    return answer;
}
 */

