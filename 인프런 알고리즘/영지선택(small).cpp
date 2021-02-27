#include <iostream>

using namespace std;
const int maxSize = 50;

int H, W, n, m, sum, sum1;
int arr[maxSize][maxSize];

int main(void)
{
    cin >> H >> W;
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            cin >> arr[i][j];
        }
    }
    cin >> n >> m;
    for (int i = 0; i < H - n + 1; ++i)
    {
        for (int j = 0; j < W - m + 1; ++j)
        {
            sum = 0;
            for (int k = i; k < i + n; ++k)
            {
                for (int s = j; s < j + m; ++s)
                {
                    sum += arr[k][s];
                }
            }
            if (sum > sum1)
                sum1 = sum;
        }
    }
    cout << sum1;
}