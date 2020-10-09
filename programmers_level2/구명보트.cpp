// PS 구명보트.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/9/20

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


/*
//테케는 맞는데 효율성 없음
int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(),people.end());
    int temp = 0;
    int start = 0;
    int end = people.size()-1;
    while(start<=end){
        if(start==end){
            answer++;
            cout << '!' << endl;

            break;
        }
        if(people[start]+people[end]<=limit){
            answer++;
            start++;
            end--;
            cout << '?' << endl;
        }
        else{
            end--;
            cout << '-' << endl;

            answer++;
        }
    }

    return answer;
}
 */

