#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int n, m, x;
vector<int> v, v1, v2;
vector<int> solution(vector<int> v, vector<int> v1)
{
    vector<int> answer;
    unordered_map<int, int> map;
    for (auto i : v)
    {
        map[i]++;
    }
    for (auto i : v1)
    {
        if (!(map.find(i) == map.end()))
        {
            answer.push_back(i);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}

int main(void)
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    v2 = solution(v, v1);
    for (auto i : v2)
    {
        cout << i << " ";
    }
}