//
// Created by 문인주 on 2020-03-07.
//

#include <iostream>
using namespace std;

//최대공약수1
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int gcd(int a, int b) {
    if (a<b) swap(a,b);
    while (b != 0)
    {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
//최대공약수2 : 재귀
int getGCD(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return getGCD(b,a%b);
    }
}
//최대공약수3 : 여러수
int getGCD2(int arr[5],int arr_length)
{
    if(arr_length < 2){
        return arr[0];
    }
    int result = getGCD(arr[0], arr[1]);
    for(int i = 2; i <arr_length; ++i)
    {
        result = getGCD(result, arr[i]);
    }
    return result;
}


int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}

//long answer = w*h; 는 곱하고 답을 구한 후 int형에 저장 후 long형으로 캐스팅하여 값을 넣어주게 됩니다.
//곱하기 연산 후 데이터가 int형의 범위를 벗어나는 오버플로우가 날 수 있습니다.

//*1억이하 자연수* 에 주의!!!!!!!


/* 멀쩡한 사각
#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int gcd(int a,int b)
{
    if(b > a) swap(a,b);
    while( b!=0)
    {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

long long solution(int w,int h)
{
	long long answer = 1;
    answer = (long)w*h - ((long)w+h-gcd(w,h));
	return answer;
}
 */