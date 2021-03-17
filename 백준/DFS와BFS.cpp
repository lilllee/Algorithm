#include <iostream>
#include <queue>
#include <cstring>

using namespace std;
const int maxSize = 1001;

int visit[maxSize];
int arr[maxSize][maxSize];
queue<int> q;
int n, m, v, x, x1;
void dfs(int a)
{
    visit[a] = 1;
    cout << a << " ";
    for (int i = 1; i <= n; ++i)
    {
        if (arr[a][i] && !visit[i])
            dfs(i);
    }
}
void bfs(int a)
{
    visit[a] = 1;
    q.push(a);
    while (!q.empty())
    {
        int xx = q.front();
        q.pop();
        cout << xx << " ";
        for (int i = 1; i <= n; ++i)
        {
            if (arr[xx][i] && !visit[i])
            {
                visit[i] = 1;
                q.push(i);
            }
        }
    }
}
int main(void)
{
    cin >> n >> m >> v;
    for (int i = 0; i < m; ++i)
    {
        cin >> x >> x1;
        arr[x][x1] = 1;
        arr[x1][x] = 1;
    }
    visit[v] = 1;
    dfs(v);
    memset(visit, 0, sizeof(visit));
    cout << endl;
    bfs(v);
}