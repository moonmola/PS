//
// 1168.cpp
// coding
//
// Created by mooninzoo on 2020-07-26.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 요세푸스 문제 2
 */

#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> vec;
    for(int i = 1; i <= n; i++) vec.push_back(i);

    int cur = -1;
    int max = n;

    cout << '<';
    for(int i = 0 ;i < n ; i++){
        cur = (cur+k)%max;

        cout << vec[cur];
        vec.erase(vec.begin()+cur);
        cur--;max--;

        if(i==n-1) cout << ">";
        else cout << ", ";
    }


}



/* 시간 초과
int main(){
//    1,2,3,4,5,6,7
//    1,2,4,5,6,7-3
//    1,2,4,5,7-6
//    1,4,5,7-2
//    1,4,5,-7
//    1,4-5
//    4-1

    int n,k;
    cin >> n >> k;
    list<int> result;
    list<int> l;

    for(int i = 1;i <= n; i++) l.push_back(i);


    list<int>::iterator index = l.begin();
    for(int i = 0; i < n;i++){

        for(int j = 0; j < k-1; j++){
            if(index == --l.end()){
                index = l.begin();
            }
            else {
                index++;
            }
        }
        result.push_back(*index);
        if(index == --l.end()){
            l.erase(index);
            index = l.begin();
        }
        else {
            index = l.erase(index);
        }

    }
    cout << '<';
    for(list<int>::iterator iter = result.begin(); iter != --result.end(); iter++)   cout << *iter<<", ";
    cout << *(--result.end()) << '>';

}
 */
