#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, num, x;
vector<int> v;

int solution(int n)
{
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        num++;
        if (num >= v[i])
        {
            answer++;
            num = 0;
        }
    }
    return answer;
}

int main(void)
{
    cin >> n;
    cout << solution(n);
}