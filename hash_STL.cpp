//
// Created by 문인주 on 2020-03-09.
//

//unordered_map(hash_map)
//find와 count로 exist체크
//주의! map[5];를 쓰는 것만으로도 m[5]가 생성된다
//이미 있는키에 insert를 하면 변하지 않는다 : 해결 m[key]사용

/*
#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, int> hash_map;
int main()
{
    hash_map.insert(make_pair("umbum",1234)); // hash_map["umbum"] = 1234 도 가능
    if(hash_map.count("umbum"))
    {
        cout << hash_map["umbum"]<< endl;
    }
    auto item = hash_map.find("umbum");
    if(item != hash_map.end())
    {
        cout << item->first << ' ' << item->second << endl;
    }


}
*/

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    string answer = "";
    unordered_map<string, int> strMap;
    for(auto elem : completion)
    {
        if(strMap.end() == strMap.find(elem))
            //.end()메소드 자료의 마지막 값의 다음값인 빈iterator의 메모리 반환
            //.find() 메소드 : iterator 반환 - 값을 찾지 못할 경우 빈 iterator 반환
            // 결론 : map에 key값이 없음을 다음과 값이 표현함
            strMap.insert(make_pair(elem,1));
        else
            strMap[elem]++;
    }
    for(auto elem : participant)
    {
        if(strMap.end() == strMap.find(elem))
        {
            answer= elem;
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
