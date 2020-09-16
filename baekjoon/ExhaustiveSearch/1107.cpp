// PS 1107.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/15/20
/*
 * 리모컨
 */

#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> button(m);
    for (auto &i : button) cin >> i;

    string str_num = to_string(n);
    int ans = abs(n-100);
    for(int i = 0; i < 1000000; i++){
        string temp = to_string(i);
        bool flag = true;
        for(int j = 0; j < temp.size(); j++){
            if(button.end()!=find(button.begin(),button.end(),(temp[j]-'0'))){
                flag=false;
                break;
            }
        }
        if(flag){
            if(ans > (abs(n-i) +temp.size())) {
                ans = abs(n - i) + temp.size();
            }
        }
    }
    cout << ans << endl;
}


/*
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> button(m);
    for (auto &i : button) cin >> i;
    string remote = to_string(n);
    int num_size = remote.size();
    string button_number;
    int ans=0;
    for (int i = 0; i < remote.size(); i++) {
        int temp1 = remote[i] - '0';
        bool flag;
        while (1) {
            if (temp1 == remote[i] - '0' - 1)//다고장났으면 flag false인채로 그냥 나와
                break;
            flag = false;
            for (auto check:button) {//고장난 버튼에 현재 숫자가 있으면 true
                if (check == temp1)
                    flag = true;
            }
            if (!flag)
                break;
            temp1++;
            if (temp1 == 10) temp1 = 0;
        }
        bool flag2;
        int temp2 = remote[i] - '0';
        while (1) {
            if (temp2 == remote[i] - '0' + 1)//다고장났으면 flag false인채로 그냥 나와
                break;
            flag2 = false;
            for (auto check:button) {//고장난 버튼에 현재 숫자가 있으면 true
                if (check == temp2)
                    flag2 = true;
            }
            if (!flag2)
                break;
            temp2--;
            if (temp2 == -1) temp2 = 9;
        }
        if(!flag&&!flag2){
            if (abs(temp1-(remote[i] - '0'))<abs(temp2 - (remote[i] - '0'))){
                button_number.push_back(temp1 + '0');
                ans+=1;
            }
            else {
                button_number.push_back(temp2 + '0');
                ans+=1;
            }
        }
        else if(!flag) {
            button_number.push_back(temp1 + '0');
            ans+=1;
        }
        else if(!flag2) {
            button_number.push_back(temp2 + '0');
            ans+=1;
        }
        else
            button_number.clear();
    }
    if (!button_number.empty()) {//button number가 있고
        int button_num = stoi(button_number);
        if (abs(n - 100) > abs(n - button_num)) { // 100번보다 더 가까울때
            ans+= abs(n-button_num);
        } else {
            ans= abs(n-100);
        }
    }
    else{
        ans = abs(n - 100);
    }
    cout << ans << endl;
}
 */