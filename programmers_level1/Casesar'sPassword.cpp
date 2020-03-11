//
// Created by 문인주 on 2020-03-11.
//

//programmers level1 시저 암호

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    // a = 97 z = 122  A = 65 Z = 90
    for(int i = 0; i < s.size(); i++)
    {
        if(97<=(int)s[i] && (int)s[i] <= 122)
        {
            if((int)s[i]+n>122)
            {
                s[i] = (int)s[i]+n -26;
            }
            else{
                s[i] = (int)s[i]+n;
            }
        }
        else if (65 <= (int)s[i] && (int)s[i] <=90)
        {
            if((int)s[i]+n > 90)
            {
                s[i] = (int)s[i]+n-26;
            }
            else{
                s[i] = (int)s[i]+n;
            }
        }
    }
    return s;
}
