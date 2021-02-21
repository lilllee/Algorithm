#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, x;
vector<int> v;
int solution(vector<int> v,int m)
{
    int answer = 1;
    sort(v.begin(),v.end());
    for(auto i: v)
    {
       if(i==m) break;
       else answer++;
    }
    return answer;
}
int main(void)
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << solution(v,m);
}