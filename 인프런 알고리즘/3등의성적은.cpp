#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, x;
vector<int> v;

bool compare(int a, int b)
{
    return a > b;
}
int solution(int n)
{
    int answer = 0, cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] > v[i + 1])
            cnt++;
        if(cnt==3)
        {
            answer = v[i];
            break;
        }
    }
    return answer;
}
int main(void)
{
    cin >> n;
    cout << solution(n);
}