#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, answer, firstTime, cnt;
typedef pair<int, int> P;
vector<P> v;

bool compare(P a, P b)
{
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

int solution(int n)
{
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.emplace_back(x, y);
    }
    sort(v.begin(), v.end(), compare);
    firstTime = v[0].second;
    answer = 1;

    for (int i = 1; i < n; i++)
    {
        if (v[i].first >= firstTime)
        {
            firstTime = v[i].second;
            answer++;
        }
    }
    return answer;
}

int main(void)
{
    cin >> n;
    cout << solution(n);
}