//
// Created by 문인주 on 2020-03-09.
//

//프로그래머스 level1 가운데 글자 가져오기

//my solution
/*
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int num =s.size()/2;
    if(s.size()%2 == 0)
    {
        answer.push_back(s[(s.size()-1)/2]);
        answer.push_back(s[(s.size()-1)/2+1]);
    }
    else
    {
        answer = s[(s.size()-1)/2];
    }
    return answer;
}
 */

//best solution

#include <string>

using namespace std;

string solution(string s) {
    return s.length()&1 ? s.substr(s.length()*0.5,1) : s.substr(s.length()*0.5-1,2);
}

