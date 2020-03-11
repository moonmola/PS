//
// Created by 문인주 on 2020-03-09.
//

//프로그래머스 level1 2016년

//my solution

//best solution :
//요일 배열을 만들어서 (string date[7] = {}) answer = date[(b+4)%7] 해도된다

/*
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> calender = {31,29,31,30,31,30,31,31,30,31,30,31};
    //int month[12] = {31,29} 어쩌구
    int day = 0;
    for(int i = 0; i < a-1; i++)
    {
        day += calender[i];
    }
    day+=b;
    int re = day%7;
    switch(re){
        case 0 :
            return "THU";
        case 1 :
            return "FRI";
        case 2 :
            return "SAT";
        case 3 :
            return "SUN";
        case 4 :
            return "MON";
        case 5 :
            return "TUE";
        case 6:
            return "WED";
    }

    return answer;
}
 */

