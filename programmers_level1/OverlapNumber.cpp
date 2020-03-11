//
// Created by 문인주 on 2020-03-09.
//

//프로그래머스 level1 같은 숫자는 싫어

//my solution

#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int cur = -1;
    for(auto elem : arr)
    {
        if(elem != cur)
        {
            answer.push_back(elem);
        }
        cur = elem;
    }
    return answer;
}