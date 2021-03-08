#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m;
queue<int> q;
vector<int> v;
string s;
//push fornt back size empty pop
int main(void)
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        if (s == "push")
        {
            cin >> m;
            q.push(m);
        }
        else if (s == "pop")
        {
            if (q.size() == 0)
                v.push_back(-1);
            else
            {
                v.push_back(q.front());
                q.pop();
            }
        }
        else if (s == "front")
        {
            if (q.empty())
                v.push_back(-1);
            else
                v.push_back(q.front());
        }
        else if (s == "back")
        {
            if (q.empty())
                v.push_back(-1);
            else
                v.push_back(q.back());
        }
        else if (s == "size")
        {
            v.push_back(q.size());
        }
        else if (s == "empty")
        {
            if (q.empty())
                v.push_back(1);
            else
                v.push_back(0);
        }
    }
    for (auto i : v)
    {
        cout << i << endl;
    }
}