#include <iostream>
#include <stack>

using namespace std;

string s1;
stack<char> st;

bool solution(string s)
{
    bool answer = true;
    for (auto i : s)
    {
        if (i == '(')
            st.push(i);
        else
        {
            if (st.empty() || st.top() != '(')
            {
                answer = false;
                return answer;
            }
            st.pop();
        }
    }
    if (!(st.empty()))
        answer = false;

    return answer;
}

int main(void)
{
    cin >> s1;
    if (solution(s1))
        cout << "YES";
    else
        cout << "NO";
}