//
// Created by 문인주 on 2020-03-11.
//

//programmers level1 비밀지도

//best solution -> 비트연산자 사용
#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i=0; i <n; i++){
        arr1[i] = arr1[i]|arr2[i];
        string ans = "";
        for(int j = 0; j<n; j++){
            if(arr1[i] % 2 == 0) ans = " " + ans;
            else ans = "#" + ans;
            arr1[i] = arr1[i] >> 1;
        }
        answer.push_back(ans);
    }
    return answer;
}

// my solution
/*
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
string TentoTwo(int num, int n)
{
    string result;
    for(int i = 0; num>0; i++)
    {
        result.push_back(num%2 + '0');
        num /= 2;
    }
    while(result.size() <n)
    {
        result.push_back('0');
    }
    reverse(result.begin(), result.end());
    return result;
}
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i = 0 ; i < n; i++)
    {
        string str1 = TentoTwo(arr1[i],n);
        string str2 = TentoTwo(arr2[i],n);
        string result;
        for(int j = 0 ; j < n; j++)
        {
            result.push_back((str1[j] == '1' || str2[j] == '1')? '#' : ' ');
        }
        answer.push_back(result);
    }
    return answer;
}
 */