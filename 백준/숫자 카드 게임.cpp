#include <iostream>

using namespace std;

const int MAX = 10000;
int list[MAX][MAX];
int n, m;

int solution(int n, int m)
{
    list[n][m];
    int answer=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> list[i][j];
        }
    }
    answer=list[n-1][0];
    
    for(int i=0;i<m;i++)
    {
        if(answer>list[n-1][i]) 
        {
            answer = list[n-1][i];
            cout <<answer;
        }
    }
    return answer;
}

int main()
{
    cin >> n >> m;
    cout << solution(n, m);
}