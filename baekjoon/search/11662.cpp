//
// 11662.cpp
// PS
//
// Created by mooninzoo on 9/8/20.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 민호와 강호
 * RETRY
 * 삼분탐색
 * 이분탐색은 단조증가/감소 함수일때 사용
 * 삼분탐색은 볼록한 함수의 극값
 */

#include <iostream>
#include <math.h>
using namespace std;
int Ax,Ay, Bx,By, Cx,Cy,Dx,Dy;
typedef pair<double,double> coor;
coor minho(double p){
    return {Ax+(Bx-Ax)*(p/100), Ay + (By-Ay)*(p/100)};
}
coor gangho(double p){
    return {Cx+(Dx-Cx)*(p/100), Cy + (Dy-Cy)*(p/100)};
}

int main(){
    cin >>  Ax >>Ay >> Bx>>By>> Cx>>Cy>>Dx>>Dy;
    double fp = 0, lp = 100, ans = 2e9;//fp~lp 범위
    while(lp-fp>=1e-6){//오차범위
        double k1 = (fp*2+lp)/3, k2 = (fp+lp*2)/3; // 1:2내분점, 2:1 내분점
        //k1,k2점일때 민호와 강호의 x,y좌표
        coor m_k1 = minho(k1), m_k2= minho(k2);
        coor g_k1 = gangho(k1), g_k2= gangho(k2);

        double dist_k1 = pow(m_k1.first-g_k1.first,2)+pow(m_k1.second-g_k1.second,2);
        double dist_k2 = pow(m_k2.first-g_k2.first,2)+pow(m_k2.second-g_k2.second,2);

        ans = min(ans,min(dist_k1,dist_k2));

        if(dist_k1>=dist_k2) fp=k1;
        else lp=k2;
    }

    cout.setf(ios::fixed);
    cout.precision(10);
    cout << sqrt(ans);
    return 0;
}


