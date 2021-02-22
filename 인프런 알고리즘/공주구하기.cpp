#include <iostream>
#include <queue>

using namespace std;

int n, m, temp;
queue<int> q;
int solution(int n, int m)
{
    int answer = 0;
    //1~n까지
    for (int i = 1; i <= n; ++i)
    {
        q.push(i);
    }
    while (1)
    {       
        for (int i = 0; i < m-1; ++i)
        {
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        q.pop();
        
        //q에 값이 1개 있을때 break
        if(q.size()==1)
        {
            answer = q.front();
            break;
        }
    }
    return answer;
}

int main(void)
{
    cin >> n >> m;
    cout << solution(n, m);
}