#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, x, price, answer;
vector<int> v;

bool compare(int a, int b)
{
    return a > b;
}
int solution(int n, int price)
{
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
    {
        answer += price / v[i];
        price %= v[i];
    }
    return answer;
}

int main(void)
{
    cin >> n >> price;
    cout << solution(n, price);
}