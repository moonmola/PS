//
// Created by πÆ¿Œ¡÷ on 2020-03-05.
//
#include <iostream>
using namespace std;

int main()
{
    int test_case;
    for(test_case = 1; test_case <=10; test_case++)
    {
        int result = 0;
        int width;
        cin >> width;
        int* view = new int [width];
        for(int i = 0; i < width; i++)
        {
            cin >> view[i];
        }
        int* cur = new int [4];
        for(int i = 2; i < width-2; i++)
        {
            cur[0] = view[i] - view[i-2];
            cur[1] = view[i] - view[i-1];
            cur[2] = view[i] - view[i+1];
            cur[3] = view[i] - view[i+2];
            int min = 256;
            for(int j = 0; j < 4; j ++)
            {
                if(cur[j]<min)
                {
                    min = cur[j];
                }
            }
            if (min >0) result += min;
        }
        delete[] cur;
        delete[] view;
        cout <<  "#" << test_case << " " << result << endl;
    }
    return 0;
}