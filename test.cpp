#include <iostream>
#include "string.h"
using namespace std;

string u = "";
string decompression(string input) {
    string u = input;
    int start_idx = input.find('(');
    int end_idx = input.rfind(')');
    int mul_idx = start_idx - 1;
//    for(int i = 0; i < start_idx-1; i++){
//        cout << input[i];
//    }


    if (start_idx > 0) {
//        cout << "input[mul_idx] " << input[mul_idx] << endl;
        for (int i = 0; i < input[mul_idx]-'0'; i++) {
            cout << decompression(input.substr(start_idx + 1, end_idx - start_idx - 1));
        }
//        for(int i = end_idx+1; i < input.size(); i++){
//            cout << input[i];
//        }
//        return decompression(input.substr(start_idx + 1, end_idx - start_idx - 1));
    }
    else {
        return input;
    }
}


int main() {

    string input;

    cout << "압축된 문자열 입력 : ";
    cin >> input;

    decompression(input);


    return 0;
}