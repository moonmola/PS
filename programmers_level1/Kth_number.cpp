//
// Created by 문인주 on 2020-03-09.
//

//프로그래머스 level1 k번째 수

/* 내 풀이
#include <string>
#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
   vector<int> answer;
   for(vector<int> com : commands){
       vector<int> temp;

       for(int k = com[0]-1;k<com[1];k++){
           temp.push_back(array[k]);
       }
       sort(temp.begin(),temp.end());
       answer.push_back(temp[com[2]-1]);
   }

   return answer;
}
*/
//best

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;

    for(int i = 0; i < commands.size(); i++) {
        temp = array;
        sort(temp.begin() + commands[i][0] - 1, temp.begin() + commands[i][1]);
        answer.push_back(temp[commands[i][0] + commands[i][2]-2]);
    }

    return answer;
}
