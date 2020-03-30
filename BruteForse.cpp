//
// Created by 문인주 on 2020-03-13.
//
#include <iostream>
#include <stack>
#include <queue>
#define MAX_SIZE 25
using namespace std;

//위 오른 아래 왼
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

int n; // 행과 열의 수
int group_id;//단지의 번호로 첫번째 단지부터 1로 시작
int groups[MAX_SIZE * MAX_SIZE]; // 각 단지별 집의 수

int map[MAX_SIZE][MAX_SIZE]; //지도
bool visited[MAX_SIZE][MAX_SIZE]; // 방문했는지를 표시하는 지도;

//DFS(stack)
void dfs_stack(int x, int y)
{
    stack<pair<int,int>> s; //이용할 스택 (x,y) -> 행,열
    s.push(make_pair(x,y)); // pair를 만들어서 stack에 push

    //처음 x,y를 방문했기 때문에
    visited[x][y] = true;
    groups[group_id]++;

    while(!s.empty())
    {
        //stack 의 top 원소 꺼내기
        x = s.top().first;
        y = s.top().second;
        s.pop();

        //해당 위치의 주변을 확인
        for(int i = 0; i < 4; i++)
        {
            int nx = x+dx[i];
            int ny = y + dy[i];

            //지도를 벗어나지 않고
            if(0 <= nx && nx < n && 0 <= ny && ny < n)
            {
                // 집이면서 방문하지 않았다면 -> 방문
                if(map[nx][ny] ==1 && visited[nx][ny] == false)
                {
                    visited[nx][ny] = true;
                    //해당 단지의 집의 수를 증가
                    groups[group_id]++;

                    s.push(make_pair(x,y)); // 현재 위치를 넣어준다
                    s.push(make_pair(nx,ny)); // 현재 nx,ny도 push
                }

            }
        }
    }
}
//BFS
void bfs(int x, int y)
{
    queue<pair<int,int>> q; // 이용할 큐, (x,y) ->(행,열)
    q.push(make_pair(x,y)); // pair를 만들어서 queue에 넣습니다.

    // 처음 x,y를 방문했기 떄문에
    visited[x][y] = true;
    groups[group_id]++;
    while(!q.empty())
    {
        //큐의 현재 원소를 꺼내기
        x = q.front().first;
        y = q.front().second;
        q.pop();

        //해당 위치의 주변을 확인
        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            //지도를 벗어나지 않고
            if(0 <= nx && nx <n && 0<=ny && ny <n)
            {
                //집이면서 방문하지 않았다면 ->방문
                if(map[nx][ny] == 1 && visited[nx][ny] == false)
                {
                    visited[nx][ny] = true;
                    //해당 단지의 집의 수를 증가시킴
                    groups[group_id]++;

                    //큐의 현재 nx,ny를 추가;
                    q.push(make_pair(nx,ny));

                }
            }
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 0; i < n ; i ++)
    {
        for(int j = 0; j < n; j++)
            cin >> map[i][j];
    }

    //전체 지도 탐색
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j ++)
        {
            //집이면서 방문하지 않았다면 -> 방문
            if(map[i][j] == 1 && visited[i][j] == false)
            {
                //해당 지역에 단지 id를 부여하고
                group_id++;

                //탐색
                dfs_stack(i,j);
                //bfs(i,j);
            }

        }
    }
    //단지마다 집들의 수로 오름차순 정렬
    //ID 는 1부터 시작

    sort(groups+1, groups+ group_id+1);

    cout << group_id << endl;
    for(int i = 1; i <= group_id; i++)
    {
        cout << groups[i] << endl;
    }
}