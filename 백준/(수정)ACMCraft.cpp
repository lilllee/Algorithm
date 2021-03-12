//수정 필요
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;
const int maxSize = 100001;
int T, N, K, D, X, Y, W;
int inDegree[maxSize];
map<int, int> fmap, smap;
vector<int> v[maxSize], answer;
queue<int> q;
int solution(vector<int> v[maxSize], map<int, int> fmap, map<int, int> smap, int W, int N)
{
    int answer = 0;
    for (int i = 1; i <= N; ++i)
    {
        if (inDegree[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int x = q.front(); 
        q.pop();
        for(auto i : v[x])
        {
            smap[i] = max(smap[i],smap[x]+fmap[i]);
            if(--inDegree[i]==0) q.push(i);
        }
    }
    answer = smap[W];
    return answer;
}
int main(void)
{
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        cin >> N >> K;
        for (int j = 0; j < N; ++j)
        {
            cin >> D;
            fmap[j] = D;
            smap[j] = D;
        }

        for (int j = 0; j < K; ++j)
        {
            cin >> X >> Y;
            v[X].push_back(Y);
            inDegree[Y]++;
        }
        cin >> W;
        answer.push_back(solution(v, fmap, smap, W, N));
        //v->clear();
    }
    for (auto i : answer)
    {
        cout << i << endl;
    }
}