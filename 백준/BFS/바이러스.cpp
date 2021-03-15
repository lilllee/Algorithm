#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m, x, x1, cnt;
vector<int> v[101];
queue<int> q;
int visit[101];
int c[101];
//bfs
int solution(vector<int> v[101])
{
    int answer = 0;
    q.push(1);
    visit[1] = true;
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
                ++answer;
            }
        }
    }
    return answer;
}
//dfs
void dfs(int start)
{
    ++cnt;
    c[start] = true;
    for (int i = 0; i < v[start].size(); ++i)
    {
        int y = v[start][i];
        if (!c[y])
        {
            dfs(y);
        }
    }
}
int main(void)
{
    cin >> n;
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> x >> x1;
        v[x].push_back(x1);
        v[x1].push_back(x);
    }
    cout << solution(v);
    dfs(1);
    cout << cnt - 1;
}