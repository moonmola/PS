//
// Created by πÆ¿Œ¡÷ on 2020-03-11.
//

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string temp = to_string(n);
    sort(temp.begin(),temp.end(),greater<char>());
    answer = stoll(temp);
    return answer;
}


