#include <iostream>
#include <cmath>

using namespace std;

int arr[9][9];
int answer[2][9];
int middleNum, arithmeticNum, num, mi, mi1;
double sum, ari;

int main(void)
{
    
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 9; ++i)
    {
        sum = 0;
        for (int j = 0; j < 9; ++j)
        {
            sum += arr[i][j];
        }
        ari = sum / 9;
        arithmeticNum = round(ari); //반올림
        answer[0][i] = arithmeticNum;
        mi = arithmeticNum - arr[i][0];
        middleNum = abs(mi);
        for (int n = 0; n < 9; ++n)
        {
            num = arithmeticNum - arr[i][n];
            mi1 = abs(num);
            if (mi1 <= middleNum)
            {
                middleNum = mi1;
                answer[1][i] = arr[i][n];
            }
        }
    }

    for (int i = 0; i < 9; ++i)
    {
        cout << answer[0][i] << " " << answer[1][i] << endl;
    }
}