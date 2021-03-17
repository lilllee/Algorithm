#include <iostream>
#include <vector>

using namespace std;
int n, x, x1;
int arr[31][31];
vector<int> answer;
int solution(int n, int x, int x1)
{
    for (int i = 1; i <= 30; ++i)
    {
        arr[1][i] = i;
    }
    if (x != 1)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 2; j <= 30; ++j)
            {
                for (int k = 2; k <= 30; ++k)
                {
                    arr[j][k] = arr[j - 1][k - 1] + arr[j][k - 1];
                }
            }
        }
    }
    return arr[x][x1];
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> x1;
        answer.push_back(solution(n, x, x1));
    }
    for (auto i : answer)
    {
        cout << i << endl;
    }
}