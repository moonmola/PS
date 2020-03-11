//
// Created by πÆ¿Œ¡÷ on 2020-03-10.
//

#include <string>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string solution(string s) {
    vector<char> temp;
    for(auto elem: s)
    {
        temp.push_back(elem);
    }
    sort(temp.begin(),temp.end(), greater<char>());
    string answer;
    for(auto elem : temp)
    {
        answer.push_back(elem);
    }
    return answer;
}
