//
// 11650.cpp
// coding
//
// Created by mooninzoo on 2020-06-08.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 좌표 정렬하기
 * 연산자 오버로딩을 통한 sort알고리즘 사용
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n ; i++){
        scanf("%d",&v[i].first);
        scanf("%d",&v[i].second);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < n; i++){
        printf("%d %d\n",v[i].first,v[i].second);
    }
}



/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Point{
    int x;
    int y;
public:
    Point(int _x, int _y): x(_x), y(_y){}
    bool operator<(Point s) const{
        if(this->x == s.x)
            return (this->y < s.y);
        else
            return (this->x < s.x);
    }
    void Print(){
        printf("%d %d\n",x,y);
    }
};
int main(){
    int n;
    scanf("%d",&n);
    vector<Point> vec;
    for(int i = 0; i <n; i++){
        int x,y;
        scanf("%d",&x);
        scanf("%d",&y);
        vec.emplace_back(x,y);
    }
    sort(vec.begin(), vec.end());
    for(auto p:vec){
        p.Print();
    }
}
*/
