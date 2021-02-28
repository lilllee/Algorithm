#include <iostream>

using namespace std;
const int maxSize = 701;

int arr[maxSize][maxSize], dy[maxSize][maxSize];

int H, W, n, m, tmp, maxNum;
int main(void)
{
    cin >> H >> W;
    for (int i = 1; i <= H; ++i)
    {
        for (int j = 1; j <= W; ++j)
        {
            cin >> arr[i][j];
            dy[i][j] = dy[i - 1][j] + dy[i][j - 1] - dy[i - 1][j - 1] + arr[i][j];
        }
    }
    cin >> n >> m;
    for (int i = n; i <= H; ++i)
    {
        for (int j = m; j <= W; ++j)
        {
            tmp = dy[i][j] - dy[i - n][j] - dy[i][j - m] + dy[i - n][j - m];
            if (tmp > maxNum)
                maxNum = tmp;
        }
    }
    cout << maxNum;
}