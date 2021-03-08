#include <iostream>
#include <queue>
#include <vector>

using namespace std;

queue<pair<int, int>> q;
priority_queue<int> prio_q;

vector<int> v, v1,answer;
int n, m, k, vp, idx, val,s;
int solution(vector<int> v, int k)
{
    int answer = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        q.push(make_pair(i, v[i]));
        prio_q.push(v[i]);
    }
    while (1)
    {
        idx = q.front().first;
        val = q.front().second;
        q.pop();
        if (val == prio_q.top())
        {
            prio_q.pop();
            ++answer;
            if (idx == k)
            {
                //큐 초기화
                while (!q.empty()&&!prio_q.empty())
                {
                    q.pop();
                    prio_q.pop();
                }
                break;
            }
        }
        else
            q.push(make_pair(idx, val));
    }
    return answer;
}
int main(void)
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> m >> k;
        for (int j = 0; j < m; ++j)
        {
            cin >> vp;
            v.push_back(vp);
        }
        s = solution(v, k);
        answer.push_back(s);
        v.clear();
    }
    for (auto i : answer)
    {
        cout << i << endl;
    }
}