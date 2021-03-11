#include <iostream>

using namespace std;

int d[41] = {0, 1};

int n, x;
int main(void)
{
    cin >> n;
    for (int i = 2; i < 41; ++i)
        d[i] = d[i - 1] + d[i - 2];

    while (n--)
    {
        cin >> x;
        if (x == 0)
            cout << 1 << " " << 0 << endl;
        else
            cout << d[x - 1] << " " << d[x] << endl;
    }
}