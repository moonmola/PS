//
// Created by 문인주 on 2020-03-09.
//

//프로그래머스 level1 체육복
//탐욕법(greedy)

/*
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n-lost.size();

    for(int i = 0; i < lost.size(); i++)
    {
        for(int j = 0; j <reserve.size(); j++)
        {
            if(lost[i]-1 == reserve[j])
            {
                answer++;
                reserve[j] = -1;
                break;
            }
            else if(lost[i]+1 == reserve[j])
            {
                answer++;
                reserve[j] = -1;
                break;
            }
        }
    }

    return answer;
}
*/

//잘 모르겠다 그냥 best코드 외워라

#include <string>
#include <vector>

using namespace std;
int student[35];
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    for(int i : reserve) student[i] += 1;
    for(int i : lost) student[i] += -1;
    for(int i = 1; i <= n; i++) {
        if(student[i] == -1) {
            if(student[i-1] == 1)
                student[i-1] = student[i] = 0;
            else if(student[i+1] == 1)
                student[i] = student[i+1] = 0;
        }
    }
    for(int i  = 1; i <=n; i++)
        if(student[i] != -1) answer++;

    return answer;
}
