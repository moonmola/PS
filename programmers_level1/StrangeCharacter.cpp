//
// Created by 문인주 on 2020-03-11.
//

//programmers level1 이상한 문자 만들기

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int k =0;
    for(int i = 0 ;i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            k=0;
        }
        else{
            if(k%2 ==0)
            {
                if((int)s[i]>=97)
                    s[i] = (int)s[i] -32;
            }
            else{
                if((int)s[i]<=90)
                    s[i] =(int)s[i] +32;
            }
            k++;
        }
    }
    return s;
}

