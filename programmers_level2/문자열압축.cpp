// PS 문자열압축.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/4/20
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = s.size();
    for(int num = 1; num <= s.size()/2; num++){
        int cur_ans = s.size();
        string str;
        int temp = 0;
        for(int i = num; i < s.size(); i=i+num){
            string curr = s.substr(i,num);
            int before = i-num;
            if(curr == s.substr(before,num)){
                temp++;
            }
            else{
                str = s.substr(i,num);
                if(temp>0){
                    cur_ans -= num*temp-(to_string(temp+1).size());
                    temp = 0;
                }
            }
        }
        if(temp>0) cur_ans -= num*temp-(to_string(temp+1).size());
        answer = min(answer,cur_ans);
    }
    return answer;
}
int main(){
    string s = "xxxxxxxxxxyyy";
    cout << solution(s);
}

