// PS 기능개발.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/4/20

#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    for(int i = 0; i < progresses.size();i++) q.push(i);
    int temp = 0;
    while(!q.empty()){
        temp = 0;
        while(progresses[q.front()]>=100){
            temp++;
            q.pop();
        }
        if(temp) answer.push_back(temp);
        for(int i = 0; i < progresses.size();i++){
            progresses[i]+=speeds[i];
        }
    }
    return answer;
}
int main(){
    vector<int> progresses={ 93, 30, 55 };
    vector<int> speeds = {1,30,5};
    vector<int> ans = solution(progresses,speeds);
    for(auto i :ans) cout << i << ' ';

}
