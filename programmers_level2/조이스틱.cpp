// PS 조이스틱.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 10/6/20
#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(string name) {
    int answer = 0;
    int lr[2];
    vector<int> visit(name.size());
    string str;
    for(int i = 0; i < name.size();i ++){
        if(name[i]=='A')    visit[i]=1;
        str+='A';
    }
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int curr =  q.front();
        q.pop();
        int Min=1e9;
        int next = -1;
        for(int i = 0; i < name.size(); i++){
            if(visit[i])    continue;
            int ud;
            int up;
            int down;
            int right;
            int left;
            int rl;
            if(curr>i){//curr보다 i가 왼쪽에 있음
                left = curr-i;
                right = name.size()-curr+i;
                rl = min(left,right);
            }
            else if(curr==i) rl = 0;
            else{//curr보다 i가 오른쪽에 있음
                left = curr+name.size()-i;
                right = i-curr;
                rl = min(left,right);
            }
//            if(Min>ud+rl) {
//                Min = ud+rl;
//                next = i;
//            }

            if(name[i]>str[curr]){//curr보다 i가 아래에있음
                up = str[curr]+ 26-name[i];
                down = name[i]-str[curr];
                ud = min(up,down);
            }
            else if(name[i]==str[curr])     ud = 0;
            else{//curr보다 i가 위에 있음
                up = str[curr]-name[i];
                down = 26-str[curr]+name[i];
                ud = min(up,down);
            }
            answer+=rl+ud;
            q.push(i);
            visit[i]=1;
            break;
        }
//        if(next!=-1) {
//            visit[next]=1;
//            str[next] = name[next];
//            q.push(next);
//            answer+=Min;
//        }
    }

    return answer;
}
int main() {
    cout << solution("ABABAAAAAAABA");
}
