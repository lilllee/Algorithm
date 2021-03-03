#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int n, m, i, timer, qsum;
vector<int> v;
queue<int> q;
int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    int answer = 0;

    while (1)
    {
        ++timer;
        //qsize 와 다리의 길이가 같아질때는 트럭이 도착했기때문에 도착한 트럭을 뺀다.
        //앞에 트럭이 빠졌기 떄문에 qsum의 값은 앞 트럭의 무게만큼 빼준다.
        if (q.size() == bridge_length)
        {
            qsum -= q.front();
            q.pop();
        }
        //트럭의 무게의 합이 다리의 최대무게보다 작거나 같을때
        if (qsum + truck_weights[i] <= weight)
        {
            if (i == truck_weights.size() - 1)
            {
                timer += bridge_length;
                break;
            }
            q.push(truck_weights[i]);
            qsum += truck_weights[i];
            ++i;
        }
        //크면 대기시켜야기 때문에 0을 push
        else
        {
            q.push(0);
        }
    }
    answer = timer;
    return answer;
}
int main(void)
{
    v.push_back(100);
    cout << solution(100, 100, v);
}
