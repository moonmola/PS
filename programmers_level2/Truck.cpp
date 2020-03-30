//
// Created by 문인주 on 2020-03-12.
//

//programmers level2 다리를 지나는 트럭


//best solution : 필사하기->ok
#include <string>
#include <vector>
#include <queue>

using namespace std;
int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    int answer = 0;
    int tot_w;

    int t_front = 0;
    int t_cur = 0;

    int sec = 0;

    queue<int> q;

    while( t_front != truck_weights.size())
    {
        if(!q.empty() && (sec - q.front() == bridge_length ))
            //q가 비어있고 현재초에서 큐의 첫번째를 뺀게???
        {
            tot_w -= truck_weights[t_front];
            ++t_front;
            q.pop();
            //다리에 가장 처음에 있는 트럭을 조건이 만족됐을때 내보낸다
            //현재 무게에서 트럭의 무게 제외
            //큐에서 가장 앞에있는 인덱스 t_front ++
            //큐에서 pop
        }
        if(t_cur != truck_weights.size() && tot_w + truck_weights[t_cur] <= weight)
            //기다리고 있는 트럭중에 가장 앞에있는 인덱스 t_cur
            //현재무게에서 t_cur의 무게를 합했을때 수용가능하면
        {
            q.push(sec);
            tot_w += truck_weights[t_cur];
            t_cur++;
        }
        ++sec;
    }
    answer = sec;
}

/* mysolution : testcase 하나는 맞았는데 나머지는 시간초과

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> q;
    int index = 0;
    int cur_weight = truck_weights[index];
    int sec = 1;
    vector<int> truck_length(truck_weights.size(),bridge_length);
    truck_length[index]--;
    while(truck_length[truck_weights.size()-1] >0) {
        if (cur_weight + truck_weights[index + 1] <= weight) {
            index++;
            q.push(truck_weights[index]);
            cur_weight += truck_weights[index];
            sec++;
            for (int k = index; k > index - q.size(); k--) {
                truck_length[k]--;
                if (truck_length[k] == -1) {
                    cur_weight -= q.front();
                    q.pop();
                }
            }
        } else {
            sec++;
            for (int k = 0; k < q.size(); k++) {
                truck_length[k]--;
                if (truck_length[k] == -1) {
                    cur_weight -= q.front();
                    q.pop();
                }
            }
        }
    }

    return sec;
}
*/
