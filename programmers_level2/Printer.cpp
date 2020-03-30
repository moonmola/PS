//
// Created by 문인주 on 2020-03-12.
//

//programmers level2 프린터
// stack/queue

//mysolution 해결
#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<int> WaitQ;
    queue<int> EndQ;

    for(int i =0; i <priorities.size(); i++)
    {
        WaitQ.push(i);
    }
    while(!WaitQ.empty())
    {
        int max = *max_element(priorities.begin(), priorities.end());
        if(priorities[WaitQ.front()] == max)
        {
            EndQ.push(WaitQ.front());
            priorities[WaitQ.front()] = 0;
            WaitQ.pop();
        }
        else
        {
            WaitQ.push(WaitQ.front());
            WaitQ.pop();
        }
    }
    while(!EndQ.empty())
    {
        if(EndQ.front() == location)
        {
            answer++;
            break;
        }
        EndQ.pop();
        answer++;
    }

    return answer;
}
