//
// Created by 문인주 on 2020-03-12.
//

//programmers level2 쇠막대기
// stack/queue

#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(string arrangement) {
    int answer = 0;

    stack<int> stack1;
    int index = 0;

    while(index != arrangement.size())
    {
        if(arrangement[index] == '(')
        {
            if(arrangement[index+1] == ')')
            {
                answer += stack1.size();
                index+=2;
            }
            else{
                stack1.push(index);
                index++;
            }
        }
        else{
            stack1.pop();
            answer++;
            index++;
        }
    }
    return answer;
//    긴막대기가 아래에, 끝점 겹치기x , 괄호()가 레이져 쇠막대기끝 ( 오른쪽끝)

}
int main()
{
    string str = "()(((()())(())()))(())";
    cout << solution(str);
}