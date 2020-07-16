//
// Created by 문인주 on 2020-03-09.
//

//programmers level1 나누어 떨어지는 숫자 배열

//my solution


#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(auto elem : arr)
    {
        if(elem%divisor == 0)
        {
            answer.push_back(elem);
        }
    }
    if(answer.size()==0) answer.push_back(-1);
    else{
        sort(answer.begin(),answer.end());
    }
    return answer;
}
