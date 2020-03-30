//
// Created by 문인주 on 2020-03-14.
//

//programmers level2 더 맵게
//      heap

// best solution 우선순위 큐 자동으로 오름차순으로 정렬
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K)
{
    int answer = 0;

    int lowlow_scoville; // 가장 맵지 않은 음식의 스코빌 지수
    int low_scoville; // 두번째로 맵지 않은 음식의 스코빌 지수
    // 우선순위 큐를 이용하여 자동으로 오름차순으로 정렬
    priority_queue<int,vector<int>,greater<int>> pq(scoville.begin(),scoville.end());

    //가장 맵지 않은 음식의 스코빌 지수가 K보다 낮다면 반복
    while(pq.top() < K)
    {
        if(pq.size() == 1) return answer = -1;
        //가장 맵지 않은 음식을 추출
        lowlow_scoville = pq.top();
        pq.pop();

        //두번째로 맵지 않은 음식을 추출
        low_scoville = pq.top();
        pq.pop();

        pq.push(lowlow_scoville+(low_scoville*2));

        answer++;

    }
    return answer;

}


//mysolution 16/15, 효율성 5/0
/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    while(scoville.size()!=1)
    {
        sort(scoville.begin(), scoville.end());
        if(scoville[0]>=K)
        {
            return answer;
        }
        scoville[1] = scoville[0] + (scoville[1]*2);
        scoville.erase(scoville.begin());
        answer++;

    }
    return -1;
}
 */

