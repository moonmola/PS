//
// Created by 문인주 on 2020-03-05.
//

#include <iostream>
using namespace std;

void crack(char* arr, int* result);
int main()
{
    int T;
    int test_case;
    cin >>T;

    for(test_case = 1; test_case<=T; test_case++)
    {
        int N;
        int M;
        int password;
        cin >> N >> M;

        char* cur = new char [M];
        for(int i = 0; i< N; i++)
        {
            cin >> cur;
            if(strstr(cur,"1")!= nullptr)
            {
                break;
            }
        }

        int* result;
        int code[8];
        for(int i = 0; i < 8; i++)
        {
            cout << "!!!!" << endl;
            crack(cur,result);
            code[i] = *result;
            cout << "!!!" << endl;

        }
        int veri = (code[0]+code[2]+code[4]+code[6])*3 + code[1]+code[3]+code[5]+code[7];
        if(veri%10 == 0)
        {
            password = code[0]+code[1]+code[2]+code[3]+code[4]+code[5]+code[6]+code[7];
        }
        else
        {
            password = 0;
        }
        delete[] cur;

        cout << "#" << test_case << " " << password;




//        int** binary = new int* [N];
//        for(int i = 0;i < N; i++)
//        {
//            *binary = new int [M];
//        }
//        기억하기 : 이차원배열의 동적할당 및 삭제

    }

}
void crack(char* arr, int* result) {

    char *find2 = strstr(arr, "1");
    char *find3 = strstr(find2, "0");
    char *find4 = strstr(find3, "1");
    char *find5 = strstr(find4, "0");
    arr = find5;
    size_t num2 = strlen(find3) - strlen(find2);
    size_t num3 = strlen(find4) - strlen(find3);
    size_t num4 = strlen(find5) - strlen(find4);

    if (num2 == 1) {
        if (num3 == 1) {
            if (num4 == 4) {
                *result = 6;
            } else if (num4 == 2) {
                *result = 9;
            }
        } else if (num3 == 2) {
            if (num4 == 2) {
                *result = 2;
            }

        } else if (num3 == 3) {
            if (num4 == 2) {
                *result = 4;
            }
        }
    } else if (num2 == 2) {
        if (num3 == 1) {
            if (num4 == 1) {
                *result = 0;
            } else if (num4 == 3) {
                *result = 8;
            }
        } else if (num3 == 2) {
            if (num4 == 1) {
                *result = 1;
            }
        } else if (num3 == 3) {
            if (num4 == 1) {
                *result = 5;
            }
        }
    } else if (num2 == 3) {
        *result = 7;
    } else if (num2 == 4) {
        *result = 3;
    }


}