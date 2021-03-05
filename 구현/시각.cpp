#include <iostream>

using namespace std;

int n, answer;

bool IsCheck(int i, int j, int l)
{
    if (i % 10 == 3 || j % 10 == 3 || l % 10 == 3 || j / 10 == 3 || l / 10 == 3)
        return true;

    return false;
}
int solution(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            for (int l = 0; l < 60; l++)
            {
                if (IsCheck(i, j, l))
                    answer++;
            }
        }
    }
    return answer;
}

int main(void)
{
    cin >> n;
    cout << solution(n);
}