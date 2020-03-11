//
// Created by 문인주 on 2020-03-11.
//

//programmers level1 다트 게임

//my solution (정답)
#include <string>
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int special = 0;
    vector<int> v(3);
    int i =0;
    for(int j = 0; j < 3; j++)
    {
        if(isdigit(dartResult[i]))
        {
            int num = dartResult[i] - '0';
            if(dartResult[i+1] == '0')
            {
                num = 10;
                i++;
            }
            if(dartResult[i+1] == 'S')
                v[j] = pow(num,1);
            else if (dartResult[i+1] == 'D')
                v[j] = pow(num,2);
            else if (dartResult[i+1] == 'T')
                v[j] = pow(num,3);
            i++;
            if(dartResult[i+1] == '#')
            {
                v[j] *= (-1);
                i++;
            }
            else if(dartResult[i+1] == '*')
            {
                if(special == 0)
                    v[j] *= 2;
                else
                {
                    v[j] *=2;
                    v[j-1] *=2;
                }
                i++;
            }
            special++;
        }
        i++;
    }
    for(auto elem : v)
        answer += elem;

    return answer;
}
