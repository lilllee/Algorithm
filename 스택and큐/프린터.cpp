#include <iostream>
#include <vector>
#include <queue>

using namespace std;

queue<pair<int, int>> q;
//우선순위 큐
priority_queue<int> qq;

int idx, val;
int solution(vector<int> priorities, int location)
{
    int answer = 0;
    for (int i = 0; i < priorities.size(); ++i)
    {
        q.push(make_pair(i, priorities[i]));
        qq.push(priorities[i]);
    }
    while (1)
    {
        idx = q.front().first;
        val = q.front().second;
        q.pop();
        if (qq.top() == val)
        {
            qq.pop();
            ++answer;
            if (idx == location)
                break;
        }
        else
            q.push(make_pair(idx, val));
    }

    return answer;
}

int main(void)
{
    cout << solution({1, 1, 9, 1, 1, 1}, 0);
}