#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    bool isValid(string parentheses)
    {
        unordered_map<char, char> parenthesesMapper = {{'}', '{'}, {']', '['}, {')', '('}};
        stack<char> stackTracker = {};
        bool result;
        if (parentheses.length() % 2 == 0)
        {
            for (auto s : parentheses)
            {
                auto it = parenthesesMapper.find(s);
                if (it != parenthesesMapper.end())
                {
                    if (stackTracker.empty())
                    {
                        return false;
                    }
                    if (stackTracker.top() == it->second)
                    {
                        cout << "Found matching Popping out" << endl;
                        stackTracker.pop();
                    }
                    else
                    {
                        cout << "Found matching Popping out" << endl;

                        return false;
                    }
                }
                else
                {
                    cout << "Not Found matching pushing in" << endl;

                    stackTracker.push(s);
                }
            }
        }
        else
        {
            return false;
        }
        return stackTracker.empty();
    }
};
int main()
{
    Solution sol;
    string str = "){";
    cout << sol.isValid(str) << endl;
}