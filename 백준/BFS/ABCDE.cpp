#include <iostream>
#include <vector>

using namespace std;

int n, m, x, x1;
bool check;
vector<int> v[2001];
int visit[2001];
void dfs(int a, int b)
{
    if (b == 4)
    {
        check = true;
        return;
    }
    visit[a] = true;
    for (int i = 0; i < v[a].size(); ++i)
    {
        int y = v[a][i];
        if (!visit[y])
        {
            dfs(y, b + 1);
        }
        if (check)
            return;
    }
    visit[a] = false;
}
int solution(vector<int> v[2001], int n)
{
    int answer = 0;
    for (int i = 0; i < n; ++i)
    {
        dfs(i, 0);
        if (check)
            break;
    }
    if (check)
        answer = 1;
    else
        answer = 0;
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