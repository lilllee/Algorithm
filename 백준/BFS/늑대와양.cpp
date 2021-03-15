#include <iostream>
#include <queue>

using namespace std;

int n, m, y, x, wy, wx;
bool check;
char arr[501][501];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

queue<int> qy;
queue<int> qx;
int main(void)
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'W')
            {
                qy.push(i);
                qx.push(j);
            }
        }
    }
    check = true;
    while (!qy.empty())
    {
        y = qy.front();
        x = qx.front();
        qy.pop();
        qx.pop();
        for (int i = 0; i < 4; ++i)
        {
            wy = y + dy[i], wx = x + dx[i];
            //범위 안에서만
            if (wx >= 0 && wy >= 0 && wx < m && wy < n)
            {
                if (arr[wy][wx] == '.')
                    arr[wy][wx] = 'D';
                //주변에 양이 있을때
                else if (arr[wy][wx] == 'S')
                {
                    check = false;
                    break;
                }
            }
        }
    }
    if (check)
    {
        cout << 1 << endl;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    else
        cout << 0;
}