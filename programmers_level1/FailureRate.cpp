//
// Created by 문인주 on 2020-03-11.
//

//programmers level1 실패율

// best solution ->pair에대해 공부
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const pair<double,int>&a, const pair<double,int>&b){
    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;

}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double,int>> fail;
    for(int i=1;i<=N;i++){
        double a=0,b=0;
        for(int j=0;j<stages.size();j++){
            if(stages[j]==i) a+=1;
            if(stages[j]>=i) b+=1;
        }
        if(b!=0)
            fail.push_back(make_pair(a/b,i));
        else if(b==0)
            fail.push_back(make_pair(0,i));
    }
    sort(fail.begin(),fail.end(),cmp);
    auto it=fail.begin();
    for(it=fail.begin();it!=fail.end();it++)
        answer.push_back(it->second);
    return answer;
}

//my solution 풀다 막힘 (같은 실패율에서 인덱스 오름차순에서)
/*
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<float> temp;
    temp.push_back(-1);
    for(int j = 1; j <N+1;j++)
    {
        int success = 0;
        int fail = 0;
        for(int i = 0 ; i < stages.size(); i++)
        {
            if(stages[i]>=j)
                success++;
            if (stages[i] == j)
                fail++;
        }
        // cout << fail<<' '<<success << endl;
        temp.push_back((float)fail/(float)success);
    }
    for(auto elem : temp)
        cout << elem << endl;
    // temp.erase(temp.begin());

    for(int i = 1; i < temp.size(); i++)
    {
        float max = -1;
        int max_index;
        for(int j = 0; j < temp.size(); j++)
        {
            if(temp[j]>max)
            {
                max = temp[j];
                max_index = j;
            }
        }
        if(temp[max_index] == temp[max_index-1])
        {
            if()
        }
        answer.push_back(max_index);
        temp[max_index] = -1;
        // temp.erase(temp.begin()+pose);
    }

    return answer;
}
 */

