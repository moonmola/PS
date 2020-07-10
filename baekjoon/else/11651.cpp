//
// 11651.cpp
// coding
//
// Created by mooninzoo on 2020-06-14.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 좌표 정렬하기 2
 * printf, scanf를 안쓰면 시간초과된다
 * first값이 같으면 second값으로 오름차순 하는게 default?
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Point{
    int x;
    int y;
public:
    Point(int _x, int _y):x(_x),y(_y) {}
    bool operator<(Point P)const {
        if(this->y == P.y)
            return this->x < P.x;
        else
            return this->y <P.y;
    }
    void Print(){
        printf("%d %d\n",x,y);
    }
};

int main(){
    int n;
    scanf("%d",&n);
    vector<Point> v;
    for(int i = 0; i <n; i++){
        int x,y;
        scanf("%d",&x);
        scanf("%d",&y);
        v.push_back(Point(x,y));
    }
    sort(v.begin(),v.end());
    for(auto elem:v){
        elem.Print();
    }

}