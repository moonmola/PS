// PS 1158.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/23/20
/*
 * 요세푸스 문제
 * 큐를 이용해 쉽게 풀 수 있다
 */
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(void) {
    int num, data;
    queue<int> q;

    cin >> num >> data;
    cout << "<";
    for (int i = 1; i <= num; i++) {
        q.push(i);
    }
    while (!q.empty()) {
        for (int j = 0; j < data-1; j++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();
        if (!q.empty())
            cout << ", ";
    }
    cout << ">";
}

