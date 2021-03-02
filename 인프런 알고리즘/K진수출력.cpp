#include <iostream>
#include <stack>

using namespace std;

int n, k;
stack<int> s;
char str[20] = "0123456789ABCDEF";

void solution(int n, int k)
{
    while (n > 0)
    {
        s.push(n % k);
        n = n / k;
    }
    while (!s.empty())
    {
        cout << str[s.top()];
        s.pop();
    }
}

int main(void)
{
    cin >> n >> k;
    solution(n, k);
}