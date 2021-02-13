#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}
int solution(vector<int> citations)
{
    int answer = 0, cnt = 1;

    sort(citations.begin(), citations.end(), compare); // [6,5,3,1,0]  1=6 2=5 3=3 3을 return
    for (int i = 0; i < citations.size(); i++)
    {
        if (cnt == citations[i])
        {
            answer = citations[i];
            break;
        }
        else if (cnt > citations[i])
        {
            answer = cnt - 1;
            break;
        }
        cnt++;
    }
    if (cnt - 1 == citations.size())
        answer = cnt - 1;

    return answer;
}
