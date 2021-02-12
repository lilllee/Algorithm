#include <vector>
#include <algorithm>

using namespace std;

//배열 array의 i번째 숫자부터 j번째 숫자까지 자르고 정렬했을 때, k번째에 있는 수를 구하려 합니다.

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
    vector<int> other;                                             //새로 저장할 벡터

    for (int i = 0; i < commands.size(); i++)
    {
        int x = 0;
        other.clear();                                             // 벡터를 clear      
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++)  // i ~ j 의 사이의 값을 넣어줌.
        {
            other.push_back(array[j]);
        }
        sort(other.begin(), other.end());                          // 이후 정렬 
        x = other[commands[i][2] - 1];                             // x = 정렬된 other 의 k번째의 수 
        answer.push_back(x);                                      
    }

    return answer;
}