//
// Created by 문인주 on 2020-03-12.
//

//programmers level2 주식가격

//stack 사용해보기 retry
//mysolution 단순 for문
/*
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size());
    for(int i = 0; i < prices.size();i++)
    {
        for(int j = i+1; j < prices.size();j++)
        {
            if(prices[i]<=prices[j])
                answer[i]++;
            else
            {
                answer[i]++;
                break;
            }
        }
    }
    return answer;
}
*/
