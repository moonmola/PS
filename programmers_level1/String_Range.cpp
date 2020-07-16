//
// Created by 문인주 on 2020-03-10.
//

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
#include <string>
#include <vector>
#include <algorithm>

    using namespace std;

    vector<string> solution(vector<string> strings, int n) {
        vector<string> answer;
        vector<char> temp;
        for(auto elem:strings)
        {
            temp.push_back(elem[n]);
        }
        sort(temp.begin(),temp.end());
        for(int i = 1; i < temp.size(); i++)
        {
            if(temp[i-1] == temp[i])
            {
                sort(strings.begin(), strings.end());
                break;
            }
        }
        for(auto elem : temp)
        {
            for(int i = 0 ; i < strings.size() ; i++)
            {
                if(elem == strings[i][n])
                {
                    answer.push_back(strings[i]);
                    strings.erase(strings.begin()+i);
                    break;
                }
            }
        }
        return answer;
    }



    return answer;
}