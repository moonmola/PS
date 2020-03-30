//
// Created by 문인주 on 2020-03-14.
//

//최적해를 구하는 상황에서 사용하는 방법
//여러 경우 중 하나를 선택할 때 그것이 그 상황에서 가장 좋다고 생각하는것을 선택
//가장 좋은 결과를 얻는것이 보장되는것은 아님

//예제
//동전지불 : 지불해야 하는 값이 762원일때 1원 10원 50원 100원 500원짜리 동전으로 동전의 수가 가장 적게 지불하시오
#include <iostream>
using namespace std;
int main()
{
    int input = 762;
    int coin[5] = {500, 100, 50, 10, 1};
    int num = 0;
    for(int i = 0; i < 5; i++)
    {
        while(input>= coin[i])
        {
            input -= coin[i];
            num++;
        }
    }
    cout << num;

}