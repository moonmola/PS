//
// Created by πÆ¿Œ¡÷ on 2020-03-14.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<char> temp  = {'1','7','9' };
    int N;
    cin >> N;
    vector<string> v;
    int i = 1;
    int cur = 0;
    string result;
    while(1)
    {
        if(N-cur < 2)
            break;
        if(N-cur >=4 || N-cur ==2)
        {
            result = temp[0] + result;
            cur += 2;
        }
        else if((N-cur<=3&&N-cur<=5)) {
            result = temp[1] + result;
            cur += 3;
        }


    }
    cout << stoll(result);
    return 0;
}