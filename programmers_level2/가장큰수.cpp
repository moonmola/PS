// PS 가장큰수.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/6/20
/*
 * RETRY
 */
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(string& a,string& b){
    // int size = max(a.size(),b.size());
    string a1 = a;
    string b1 = b;
    if(a1.size()<b1.size()){
        while(a1.size()!=b1.size()){
            a1+=a1.back();
        }
    }
    else{
        while(b1.size()!=a1.size()){
            b1+=b1.back();
        }
    }
    for(int i = 0; i < a1.size(); i++){
        if(a1[i]>b1[i])   return 1;
        else if(a1[i]<b1[i])  return 0;
    }
    return 1;
}

string solution(vector<int> numbers) {
    vector<string> number;
    for(auto i : numbers){
        number.push_back(to_string(i));
    }
    sort(number.begin(), number.end(),compare);
    string answer = "";
    for(auto i :number) answer+=i;

    return answer;
}
int main(){
    vector<int> numbers = {6, 10, 2};
    solution(numbers);
}
