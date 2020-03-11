//
// Created by 문인주 on 2020-03-10.
//

//programmers level1 두 정수 사이의 합

#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(b<a)
    {
        int c = a;
        a = b;
        b = c;
    }
    for(int i = a; i<=b; i++)
    {
        answer += i;
    }
    return answer;
}

