#include <iostream>

using namespace std;
const int MaxSize = 50;
int n, cnt, index, rcnt;
int arr[MaxSize][MaxSize];
//상하좌우
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int solution(int n)
{
    int answer = 0;
    //지도 만들기
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            index = arr[i][j];
            cnt = 0;
            for (int z = 0; z < 4; ++z)
            {
                if (!(index > arr[i + dx[z]][j + dy[z]]))
                    continue;
                else
                    cnt++;
                if (cnt == 4)
                    rcnt++;
            }
        }
    }
    answer = rcnt;
    return answer;
}
int main(void)
{
    cin >> n;
    cout << solution(n);
}