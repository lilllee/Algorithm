#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
string x;
vector<string> v, answer;
bool compare(string a, string b)
{
    if (a.length() != b.length())
        return a.length() < b.length();
    else
        return a < b;
}

int main(void)
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == v[i - 1])
            continue;
        else
            answer.push_back(v[i]);
    }
    for (auto i : answer)
    {
        cout << i << endl;
    }
}