//
// Created by 문인주 on 2020-03-14.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int k;
    cin >> k;
    for(int l = 0; l <=k;l++) {
        int m, n;
        cin >> m >> n;
        //m�� ���� n�� ����
        vector<vector<int>> map(m, vector<int>(n));
        vector<vector<int>> temp(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> map[i][j];
            }
        }
        for(auto vec: map)
        {
            for(auto elem : vec)
                cout<< elem << ' ';
            cout << endl;
        }
        int dx[] = {0, 1, 1};
        int dy[] = {1, 1, 0};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int cur_temp = 0;
                if (map[i][j] == 1 && temp[i][j] == 0) {
                    cur_temp = 1;
                    for (int k = 0; k < 4; k++) {
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                            if (map[nx][ny] == 1)
                                cur_temp++;
                        }
                    }
                }
                if (cur_temp == 4) {
                    temp[i][j] = 1;
                    for (int k = 0; k < 4; k++) {
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        temp[nx][ny] = 1;
                    }
                }
                for(auto vec: map)
                {
                    for(auto elem : vec)
                        cout<< elem << ' ';
                    cout << endl;
                }
            }
        }
        if (temp == map)
            cout << "YES";
        else
            cout << "NO";
    }


    return 0;
}
