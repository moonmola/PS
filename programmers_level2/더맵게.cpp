// PS 더맵게.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/6/20
/*
 * RETRY
 */
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int,vector<int>,greater<>> q(scoville.begin(),scoville.end());
    while (q.top()<K && q.size()>1){
        int temp1 = q.top();
        q.pop();
        int temp2 = q.top();
        q.pop();
        q.push(temp1 + temp2*2);
        answer++;
    }
    if(q.top()<K) answer=-1;

    return answer;
}


