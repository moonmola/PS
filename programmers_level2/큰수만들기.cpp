// PS 큰수만들기.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/6/20
/*
 * RETRY
 */
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string& number, int k) {
    string answer = "";
    int start = 0;
    int end = start+k+1;
    int k1 = k;
    int num = number.size()-k;
    for(int i = 0; i < number.size()-k1;i++){
        int midx=max_element(number.begin()+start,number.begin()+end)-number.begin();
        answer+=number.at(midx);
        num--;
        start = midx+1;
        end = number.size()-num+1;
    }
    return answer;
}
int main(){
    string number = "1924";
    cout <<solution(number,2);
}

