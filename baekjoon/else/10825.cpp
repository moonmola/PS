//
// 10825.cpp
// coding
//
// Created by mooninzoo on 2020-07-10.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 국영수
 * endl 쓰지 말고 '\n' 쓰기!!!!!!!!!
 */
#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

struct Student{
    string name;
    int kor, eng, math;
};
bool compare(Student a, Student b){
    return make_tuple(-a.kor,a.eng,-a.math,a.name)<make_tuple(-b.kor,b.eng,-b.math,b.name);
}
int main(){
    int n;
    cin >> n;
    vector<Student> v(n);
    for(int i= 0; i < n ;i++)
        cin >> v[i].name >> v[i].kor>>v[i].eng >> v[i].math;
    sort(v.begin(), v.end(), compare);
    for(int i = 0; i < n; i ++)
        cout << v[i].name << '\n';
}


/* 예제는 되는데 시간초과래 왜지,,,감자,,,, ->endl 안쓰면 된다
bool compare(tuple<string,int,int,int> t1, tuple<string,int,int,int> t2){
    if(get<1>(t1) == get<1>(t2)){
        if(get<2>(t1) == get<2>(t2)){
            if(get<3>(t1) == get<3>(t2)){
                return get<0>(t1) < get<0>(t2);
            }
            else
                return get<3>(t1) > get<3>(t2);

        }
        else
            return get<2>(t1) < get<2>(t2);

    }
    else
        return get<1>(t1) > get<1>(t2);
}
int main(){
    int n;
    cin >> n;
    vector<tuple<string,int,int,int>> v(n);
    for(int i =0;i<n;i++){
        cin >> get<0>(v[i]) >> get<1>(v[i]) >> get<2>(v[i]) >> get<3>(v[i]);
    }
    stable_sort(v.begin(),v.end(),compare);
    for(int i = 0; i <n; i++){
        cout << get<0>(v[i]) <<'\n';
    }
}
 */

