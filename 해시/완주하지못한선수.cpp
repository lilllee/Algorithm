#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

//unordered_map 으로 풀기
string solution(vector<string> participant, vector<string> completion)
{
    unordered_map<string, int> map;

    for (auto i : completion)
    {
        map[i]++;
    }
    for (auto i : participant)
    {
        if (map.find(i) == map.end())
            return i;
        else
        {
            map[i]--;
            if (map[i] < 0)
                return i;
        }
    }
}

//vector로 풀기
string solution2(vector<string> participant, vector<string> completion)
{
    int i;
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    for (i = 0; i < completion.size(); i++)
    {
        if (participant[i] != completion[i])
            return participant[i];
    }
}