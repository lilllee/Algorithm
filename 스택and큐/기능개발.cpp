#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> v, v1, v2;
queue<int> q;
int arr[101];
int sum, idx, cnt1;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    for (auto i : progresses)
    {
        q.push(i);
    }
    int cnt = 0;
    while (1)
    {
        if (cnt == 0)
        {
            sum = q.front() + speeds[idx];
        }
        else
        {
            sum += speeds[idx];
        }
        ++cnt;
        if (sum >= 100)
        {
            if (cnt > cnt1)
            {
                ++idx;
                q.pop();
                cnt1 = cnt;
                arr[cnt1]++;
                cnt = 0;
            }
            else
            {
                ++idx;
                q.pop();
                cnt = 0;
                arr[cnt1]++;
            }
        }
        if (q.size() == 0)
            break;
    }
    for (int i = 0; i < 100; ++i)
    {
        if (arr[i] != 0)
            answer.push_back(arr[i]);
    }
    return answer;
}

int main(void)
{
    v.push_back(93);
    v.push_back(30);
    v.push_back(55);
    v1.push_back(1);
    v1.push_back(30);
    v1.push_back(5);
    v2 = solution(v, v1);
    for (auto i : v2)
    {
        cout << i;
    }
}