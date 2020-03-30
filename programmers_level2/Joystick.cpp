//
// Created by πÆ¿Œ¡÷ on 2020-03-13.
//

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string name) {
    int answer = 0;
    string cur;
    cur = 'A' * name.size();
    vector<int> v;
    for(int i = 0; i < name.size(); i++)
    {
        if(name[i]<'N')
            v.push_back(name[i] - 'A');
        else
            v.push_back('Z' +1 - name[i]);
    }

    int index = 0;
    for(int j = 0; j < 10; j++)
    {
        if(v[index] != 0) {
            answer += v[index];
            v[index] = 0;

        }
        int right = index+1;
        int left = index-1;
        if(right == name.size())
            right = 0;
        if(left == -1)
            left = name.size()-1;
        if(v[left]!=0&& (v[right] ==0 || v[right] >= v[left])) {
            answer += 1;
            index = left;
        }
        else if (v[right]!=0 &&(v[left] == 0 || v[left] >= v[right]))
        {
            answer += 1;
            index = right;
        }
        else if(v[right] == 0 && v[left] == 0 )
        {
            return answer;
        }

    }
    return answer;
}
int main()
{
    string name = "JEROEN";
    cout << solution(name);

}