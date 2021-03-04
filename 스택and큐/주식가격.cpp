#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> v, v1;
stack<int> stk;
vector<int> solution(vector<int> prices)
{
    vector<int> answer;
    answer.resize(prices.size());
    for (int i = 0; i < prices.size(); ++i)
    {
        while (!stk.empty() && prices[stk.top()] > prices[i])
        {
            answer[stk.top()] = i - stk.top();
            stk.pop();
        }
        stk.push(i);
    }
    while (!stk.empty())
    {
        answer[stk.top()] = prices.size() - 1 - stk.top();
        stk.pop();
    }
    return answer;
}

int main(void)
{
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v1 = solution(v);
    for (auto i : v1)
    {
        cout << i;
    }
}