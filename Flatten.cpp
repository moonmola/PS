#include <iostream>
using namespace std;

int main()
{
    int test_case;
    int dump_num;

    for(test_case = 1; test_case<=10; test_case++)
    {
        cin >> dump_num;
        int* flatten = new int [100];
        for(int i = 0; i< 100; i++ )
        {
            cin >> flatten[i];
        }
        for(int i = 0 ; i < dump_num; i++)
        {
            int max = -1;
            int max_num = -1;
            int min = -1;
            int min_num = 101;
            for(int j = 0; j < 100 ; j++)
            {
                if(flatten[j]>max_num)
                {
                    max_num = flatten[j];
                    max = j;
                }
                if(flatten[j]<min_num)
                {
                    min_num = flatten[j];
                    min = j;
                }

            }
            flatten[max] -= 1;
            flatten[min] += 1;
        }
        int result;
        int max_num = -1;
        int min_num = 101;
        for(int i = 0; i < 100 ; i++)
        {

            if(flatten[i]>max_num)
            {
                max_num = flatten[i];
            }
            if(flatten[i]<min_num)
            {
                min_num = flatten[i];
            }
        }
        result = max_num - min_num;
        cout << "#" << test_case << " " << result << endl;
        delete[] flatten;
    }
    return 0;
}