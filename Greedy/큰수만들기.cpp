#include <string>
#include <iostream>

using namespace std;

string solution(string number, int k)
{
    string answer = "";
    for (int i = 0; i < k; i++)
    {
        bool deleteCheck = false; //값이 지워지는것을 체크.
        for (int j = 0; j < number.size(); j++)
        {
            //값이 지워졌을 때
            if (number[j] < number[j + 1])
            {
                number.erase(j, 1);
                deleteCheck = true;
                break;
            }
        }
        //값이 지워지지 않을때
        if (!deleteCheck)
            number.erase(number.size() - 1, 1);
    }
    return answer = number;
}

int main(void)
{
    cout << solution("1924", 2) << endl
         << solution("1231234", 3) << endl
         << solution("999", 2);
}