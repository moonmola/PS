//
// Created by 문인주 on 2020-03-12.
//

//programmers level2 탑

//stack 사용해서 retry

//my solution : 그냥 for문 써서 풀음
/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer(heights.size());
    for(int i = heights.size() -1; i >0; i--)
    {
        for(int j = i-1; j>=0; j--)
        {
            if(heights[i] <heights[j])
            {
                answer[i] = j+1;
                break;
            }
        }
    }
    return answer;
}
 */