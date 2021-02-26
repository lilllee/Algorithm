#include <iostream>
#include <vector>

using namespace std;

int n, x, k, pos, cnt;
vector<int> v;
int solution(vector<int> v, int k)
{
    int answer = 0;
    while (1)
    {
        if (pos > v.size() - 1)
            pos = 0;
        pos++; //가르키고있는 위치.
        if (v[pos - 1] != 0)
        {
            v[pos - 1] -= 1;
            cnt++; // k 카운트하기위해
        }
        if (cnt == k)
            break;
    }
    //살아있는 작업
    while (1)
    {
        if (pos > v.size())
            pos = 0;
        pos++;
        if (v[pos - 1] != 0)
            break;
    }
    answer = pos;
    return answer;
}
int main(void)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    cout << solution(v, k);
}
