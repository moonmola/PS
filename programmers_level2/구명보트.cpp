// PS 구명보트.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/9/20
/*
 * 맞았는데 cout안지워서 효율성테스트 0점나왔음
 * 제출할떄는 cout 지우기!!!!!!
 */
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(),people.end());
    int temp = 0;
    int start = 0;
    int end = people.size()-1;
    while(start<=end){
        if(start==end){
            answer++;
            break;
        }
        if(people[start]+people[end]<=limit) {
            answer++;
            start++;
            end--;
        }
        else{
            end--;
            answer++;
        }
    }
    return answer;
}


