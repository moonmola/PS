//
// 2011.cpp
// coding
//
// Created by mooninzoo on 2020-06-06.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * 암호코드
 * 0이 들어갈때 예외 처리 해줘야함
 * 왜틀리는거지
 * 답 :
 * 이 경우는 어떨까요? ( 반드시 해석가능한 코드만 입력이 되지는 않습니다. )
 * 입력으로 0020이 주어지면, 글쓴이님의 코드는 2가 나옵니다. (실제로는 해석이 불가능한 코드입니다.)
 * 따라서, 정답은 0이 나와야 합니다. 예외처리를 하실 때, 이 부분을 더고려해주셔야 합니다. 파이팅!
 */

//1233123123113232123113232131232323123231233123213131 - 687040
//132232332132132312321 - 1296
//321131321321331 - 90

#include <iostream>
#include <string>
using namespace std;

#define mod 1000000
int main(){

    string input;
    cin >> input;
    unsigned long size = input.length();
    int arr[2][2];
    int result = 1;
    arr[0][0] = 1;
    arr[1][0] = 0;
    if (input == "0")
        result = 0;

    for (int i = 1; i < size; i++) {
//        cout << arr[0][0] <<'\t'<<arr[1][0] << endl;
        int num1 = stoi(input.substr(i, 1)); //1의자리수
        int num2 = stoi(input.substr(i - 1, 2)); //2의 자리수
        //0일때 예외처리
        if(num2 ==0) {
            result = 0;
            break;
        }
        if (num1 == 0) {
            if (num2 >= 30) {
                result = 0;
                break;
            }
        }
        //1의자리수의 경우의수
        arr[0][1] = (arr[0][0] + arr[1][0])%mod;
        //2의자리수의 경우의수
        if (num2 >= 10 && num2 <= 26) {
            arr[1][1] = arr[0][0];
        } else arr[1][1] = 0;
        result = (arr[0][1] + arr[1][1]) % mod;
        arr[0][0] = arr[0][1];
        arr[1][0] = arr[1][1];
    }
    cout << result << endl;

}



/*
#define mod 1000000
#include <iostream>
#include <string>
using namespace std;
int factorial(int n){
    for(int i = n-1; i> 0 ; i --){
        n = n*i;
    }
    return n;
}
int main(){
    string password;
    cin >> password;
    int result = 1;
    int minus = 0;
    for(int i = 0; i<password.length()-1; i++){
        if(stoi(password.substr(i,2)) <27 && stoi(password.substr(i,2))>9) minus++;
    }
    for(int i = 1; i <= password.length()/2; i++){
        int num1 = password.length()-i*2;
        int num2 = i;
        int num3 = num1;
        cout << num1+num2 <<'\t' << num2 <<'\t' << num3 << endl;
        if(num1<1)
            num3 = 1;
        if((factorial(num1+num2)/factorial(num3)/factorial(num2))-minus >0)
            result = (result+(factorial(num1+num2)/factorial(num3)/factorial(num2))-minus)%mod;
    }
    cout << result << endl;
}
 */