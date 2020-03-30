//
// Created by 문인주 on 2020-03-12.
//

//programmers level2 문자열 압축
//2020 KAKAO RECRUITMENT

//5:35~5:50 9:43~

//모르겠다 retry
#include <iostream>
#include <unordered_set>

using namespace std;
int f(int n)
{
    if(n == 1) return 0;
    int ret = 0;
    while(n)
    {
        ret++;
        n /= 10;
    }
    return ret;
}

int solution(string s)
{
    int answer = s.size() , n = s.size();
    unordered_set<string> S;

    for(int i =1 ; i*2 <=n; ++i)
    {
        S.clear();
        int j, len = 0, cnt = 1;
        string prv = s.substr(0,i);
        S.insert(prv);

        for( j = i; j < n; j += i)
        {
            if(S.find(s.substr(j,i)) != S.end()) ++cnt;
            else{
                len += f(cnt) + i;
                S.erase(prv);
                S.insert(prv = s.substr(j,i));
                cnt = 1;
            }

        }
        len += cnt >1 ? f(cnt)+i : n - j + i;
        answer = min(answer, len);
    }
    return answer;


}

//실패 테스트케이스 72/100
/*
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int> result;
    for(int i = 1; i <= s.size(); i++)
    {
        int temp = 0;
        int pose = 0;
        int remain = 0;
        vector<string> temp_V;
        for(int j = 0; pose != s.size() + i ; j++)
        {
            if(temp_V.empty()) {
                temp_V.push_back(s.substr(pose, i));
                if(pose + i > s. size())
                {
                    temp += s.size() - pose;
                    pose = s.size();
                }
                pose += i;
            }
            else {
                if (temp_V[0] == s.substr(pose, i)) {
                    temp_V.push_back(s.substr(pose, i));
                    pose += i;
                } else {
                    if (temp_V.size() > 1)
                    {
                        temp += i + 1;
                    } else {
                        temp += i;
                    }
                    temp_V.clear();
                }
            }
        }
        if(temp!=0)
            result.push_back(temp);
    }

    answer = *min_element(result.begin(), result.end());
    return answer;
}
 */
