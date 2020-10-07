// PS 소수찾기.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/7/20
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
int arr[10000001];

using namespace std;

int solution(string numbers) {
//    int arr[10000001] = {0,};
    int answer = 0;
    arr[0]=1,arr[1]=1;
    for(int i = 2; i < 10000000;i++){
        for(int j =2; i*j<10000000; j++){
            arr[i*j] = 1;
        }
    }
     sort(numbers.begin(),numbers.end());
    vector<int> ind(numbers.size(),1);
//    for(int k = 0; k < numbers.size(); k++){
//        ind[k]=0;
    do{
        string temp;
        for(int i = 0; i < numbers.size(); i++){
            temp +=numbers[i];
        }
        cout << stoi(temp) << ' ';
        if(!arr[stoi(temp)]){
             cout << stoi(temp) << endl;
            answer++;
            arr[stoi(temp)]=2;
        }
    }while(next_permutation(numbers.begin(),numbers.end()));
//    }
    return answer;
}
int main(){
//    assertEquals(3, test.solution("17"));
//    assertEquals(2, test.solution("011"));
//    assertEquals(1, test.solution("2"));
//    assertEquals(12, test.solution("7843"));
//    assertEquals(0, test.solution("9999999"));
//    assertEquals(1336, test.solution("1276543"));
    string str = "7843";
    sort(str.begin(), str.end());
//    string str = "9999999";

    cout << solution(str);
}

