#include <iostream>
using namespace std;

int n, p2, p3, p5, minN;
int arr[1501];
int solution(int n)
{
    int answer = 0;
    p2 = p3 = p5 = 1;
    arr[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        if (arr[p2] * 2 < arr[p3] * 3)
            minN = arr[p2] * 2;
        else
            minN = arr[p3] * 3;
        if (arr[p5] * 5 < minN)
            minN = arr[p5] * 5;
        if (arr[p2] * 2 == minN)
            p2++;
        if (arr[p3] * 3 == minN)
            p3++;
        if (arr[p5] * 5 == minN)
            p5++;
        arr[i] = minN;
    }
    answer = arr[n];
    return answer;
}
int main(void)
{
    cin >> n;
    cout << solution(n);
}