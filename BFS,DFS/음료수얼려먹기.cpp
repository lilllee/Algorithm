#include <iostream>
#include <stdio.h>

using namespace std;

const int MaxSize = 1001;
int n, m, answer;
int arr[MaxSize][MaxSize];

bool dfs(int a, int b)
{
    if (a <= -1 || a >= n || b <= -1 || b >= m)
        return false;

    if (arr[a][b] == 0)
    {
        arr[a][b] == 1;
        dfs(a - 1, b);
        dfs(a + 1, b);
        dfs(a, b - 1);
        dfs(a, b + 1);
        return true;
    }
    return false;
}

int main(void)
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf_s("%1d",&arr[i][j]);
        } 
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (dfs(i, j))
                answer++;
        }
    }
    cout << answer;
}
