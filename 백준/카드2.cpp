#include <iostream>
#include <queue>

using namespace std;

int n, val;
queue<int> q;
int solution(int n)
{
   int answer = 0;
   for (int i = 1; i <= n; ++i)
   {
      q.push(i);
   }
   while (1)
   {
      if (q.size() == 1)
      {
         answer = q.front();
         break;
      }
      q.pop();
      val = q.front();
      q.pop();
      q.push(val);
   }
   return answer;
}
int main(void)
{
   cin >> n;
   cout << solution(n);
}