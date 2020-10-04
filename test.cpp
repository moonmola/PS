//
// Created by moon on 2020-03-31.
//

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
bool isSame(string id, string ban){
    if(id.size() != ban.size())  return false;
    for(int i = 0; i < id.size(); i++){
        if(ban[i]=='*') continue;
        else if(ban[i] != id[i])    return false;
    }
    return true;
}

int solution(vector<string> user_id, vector<string> banned_id) {
    int answer = 0;
    vector<int> ind;
    for(int i = 0; i < banned_id.size(); i++) ind.push_back(0);
    for(int i = 0; i < user_id.size()-banned_id.size(); i++) ind.push_back(1);
    do{
        int temp = 0;
        vector<string> banned = banned_id;
        for(int i = 0; i < user_id.size(); i++){
            if(!ind[i]){
                cout << user_id[i] <<' ';
                for(auto& ban : banned){
                    if(isSame(user_id[i], ban)) {temp++;
                    ban ="";
                    break;}
                }
            }
        }
        cout << endl;
        if(temp==banned_id.size()) answer++;
    }while(next_permutation(ind.begin(),ind.end()));


    return answer;
}
int main(){
    vector<string> user_id = {"frodo", "fradi", "crodo", "abc123", "frodoc"};
    vector<string> banned_id = {"fr*d*", "*rodo", "******", "******"};

    cout << solution(user_id,banned_id);
}