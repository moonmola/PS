// PS 1744.cpp
// Copyright (c) 2020 moonmola. All rights reserved. 9/13/20

/*
 * 수 묶기
 * RETRY
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto& i: vec)   cin >> i;
    sort(vec.begin(), vec.end());
    int left = 0, right = n-1;
    int ans = 0;
    for(auto& i: vec)   cout << i <<' ';
    cout << '\n';

    for(;left < right; left+=2){
        if(vec[left]<1 && vec[left+1] < 1)  ans+= vec[left]*vec[left+1];
        else    break;
        cout << ans << '\n';

    }
    for(;right>0; right-=2){
        if(vec[right] > 1 && vec[right-1] > 1) {
            ans += vec[right] * vec[right + 1];
            cout << vec[right] << endl;
        }
        else    break;
        cout << ans << '\n';

    }
    for(;right >= left; right--)    ans+= vec[right];
    cout << ans << '\n';
}