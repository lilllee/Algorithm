#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[1001];
queue<int> q;
int visit[1001];
int n, m, x, x1, cnt;
//DFS
void dfs(int start)
{
    visit[start] = true;
    for (int i = 0; i < v[start].size(); ++i)
    {
        int next = v[start][i];
        if (!visit[next])
            dfs(next);
    }
}
//BFS
void bfs(int start)
{
    visit[start] = true;
    q.push(start);
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int i = 0; i < v[x].size(); ++i)
        {
            int y = v[x][i];
            if (!visit[y])
            {
                q.push(y);
                visit[y] = true;
            }
        }
    }
}
int solution(vector<int> v[501], int n)
{
    int answer = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (!visit[i])
        {
            ++cnt;
            dfs(i);
        }
    }
    answer = cnt;
    return answer;
}
int main(void)
{
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> x >> x1;
        v[x].push_back(x1);
        v[x1].push_back(x);
    }
    cout << solution(v, n);
}