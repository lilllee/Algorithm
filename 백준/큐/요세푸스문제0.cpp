#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m;
queue<int> q;
vector<int> v;
int main(void)
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        q.push(i);
    }
    while (!q.empty())
    {
        for (int i = 0; i < m - 1; ++i)
        {
            int front = q.front();
            q.pop();
            q.push(front);
        }
        int deleteNum = q.front();
        q.pop();
        v.push_back(deleteNum);
    }
    cout << "<";
    for (int i = 0; i < v.size() - 1; ++i)
    {
        cout << v[i] << ", ";
    }
    cout << v.at(n - 1) << ">";
}