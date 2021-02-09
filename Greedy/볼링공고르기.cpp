#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, x, answer;
vector<int> v;
int solution(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        cin >>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i]>v[j]) answer++;
        }
    }
    return answer;
}

int main(void)
{
    cin >> n >> m;
    cout << solution(n, m);
}