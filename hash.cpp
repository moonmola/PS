//
// Created by 문인주 on 2020-03-07.
//



//hash는 자료를 입력할 때부터 검색하기 쉬운 위치에 삽입하는 방법(빠른 검색을 위해 자료른 관리하는 기법)
// example : 이름의 첫글자를 기준으로 주소를 적는 방법
//자료가 저장되는 전체저장소 : Hash Table 단위(Bucket)


//#include <iostream>
//using namespace std;
//
//int hash(const char* str)
//{
//    int hash = 401;
//    int c;
//
//    while(*str != '\0')
//    {
//        hash = ((hash<<4)+(int)(*str)) % MAX_TABLE;
//        str++;
//    }
//    return hash % MAX_TABLE;
//}


//완주하지 못한선수

//sort 사용
/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for(int i=0;i<completion.size();i++)
    {
        if(participant[i] != completion[i])
            return participant[i];
    }
    return participant[participant.size() - 1];
    //return answer;
}
//hash 사용

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> strMap;
    for(auto elem : completion)
    {
        if(strMap.end() == strMap.find(elem))
            strMap.insert(make_pair(elem, 1));
        else
            strMap[elem]++;
     }

    for(auto elem : participant)
    {
        if(strMap.end() == strMap.find(elem))
        {
            answer = elem;
            break;
        }
        else
        {
            strMap[elem]--;
            if(strMap[elem] < 0)
            {
                answer = elem;
                break;
            }
        }
    }
    return answer;
}
 */

