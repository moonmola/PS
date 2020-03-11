//
// Created by 문인주 on 2020-03-09.
//

//프로그래머스 level1 모의고사


#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> p1 = {5,4,3,2,1};
    vector<int> p2 = {5,2,4,2,3,2,1,2};
    vector<int> p3 = {5,5,4,4,2,2,1,1,3,3};
    vector<int> n(3);

    for(auto elem:answers)
    {
        if(elem == p1[p1.size()-1])
        {
            n[0]++;
        }
        p1.pop_back();
        if(p1.size() == 0)
            p1 = {5,4,3,2,1};
        if(elem == p2[p2.size()-1]){
            n[1]++;
        }
        p2.pop_back();
        if(p2.size() == 0)
            p2 = {5,2,4,2,3,2,1,2};
        if(elem == p3[p3.size()-1]){
            n[2]++;
        }
        p3.pop_back();
        if(p3.size() == 0)
            p3 = {5,5,4,4,2,2,1,1,3,3};
    }
    int n_max =*max_element(n.begin(), n.end());
    for(int i = 0; i < 3; i ++)
    {
        if(n[i] == n_max)   answer.push_back(i+1);
    }

    return answer;
}
int main()
{
    vector<int> answer = {1,3,2,4,2};
    vector<int> result = solution(answer);
    for(auto elem : result)
    {
        cout << elem << endl;
    }
}