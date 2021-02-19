#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<string, int> map;

int solution(vector<vector<string>> clothes)
{
    int answer = 1;
    for (auto i : clothes)
    {
        map[i[1]]++;
    }
    for(auto iter = map.begin(); iter != map.end();++iter)
    {
        answer *= iter -> second+1;
    }
    return answer-1;
}