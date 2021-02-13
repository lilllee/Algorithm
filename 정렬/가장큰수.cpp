#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> s;

//앞자리가 큰수가 오도록
bool compare(const string &a, const string &b)
{
    return a + b > b + a;
}

string solution(vector<int> numbers)
{
    string answer = "";

    for (auto i : numbers)
        s.push_back(to_string(i));

    sort(s.begin(), s.end(), compare);

    for (auto i : s)
        answer += i;

    if (answer[0] == '0')
        return "0";

    return answer;
}