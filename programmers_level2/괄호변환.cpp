// PS 괄호변환.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/6/20
#include <string>
#include <vector>
#include <iostream>

using namespace std;
string f(string a){
    if(a=="")   return "";
    int l=0,r=0;
    string u,v;
    bool flag = true;
    for(int i = 0; i < a.size(); i++){
        if(a[i]=='(') l++;
        else r++;
        if(r>l) flag = false;
        if(l==r){
            u = a.substr(0,i+1);
            v = a.substr(i+1);
            break;
        }
    }
    if(!flag){
        string temp ="("+f(v)+")";
        u.erase(u.begin());
        u.erase(u.end()-1);
        for(auto i : u){
            if(i=='(') temp+=')';
            else temp +='(';
        }
        return temp;
    }
    else return u+f(v);

}

string solution(string p) {
    string answer = f(p);
    return answer;
}