#include <iostream>
#include <vector>

using namespace std;

int n, x, tmp;
vector<int> v;
vector<int> solution(int n)
{
    vector<int> answer;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        answer.push_back(x);
    }

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (answer[j] > 0 && answer[j + 1] < 0)
            {
                tmp = answer[j];
                answer[j]=answer[j+1];
                answer[j+1]=tmp;
            }
        }
    }
    return answer;
}
int main(void)
{
    cin >> n;
    v = solution(n);
    for (auto i : v)
    {
        cout << i << " ";
    }
}