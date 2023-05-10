#include <vector>
#include <map>
#include <iostream>
using namespace std;
int main()
{
    std::string s = " ";
    vector<char> filteredString;
    int length = s.length();
    bool palindrome = false;
    for (int i = 0; i < length; i++)
    {
        if (isalnum(s.at(i)))
        {
            filteredString.push_back(tolower(s.at(i)));
        }
    }
    int start = 0;
    int filteredLength = filteredString.size();
    int end = filteredLength - 1;
    if (filteredLength == 0)
    {
        palindrome = true;
    }
    else
    {
        while (start <= end)
        {
            if (filteredString[start] == filteredString[end])
            {
                cout << "equal" << endl;
                palindrome = true;
                start++;
                end--;
            }
            else
            {
                cout << "not equal" << endl;
                palindrome = false;
                break;
            }
        }
    }

    if (palindrome)
    {
        cout << "IS PALINDROME" << endl;
    }
    else
    {
        cout << "IS NOT PALINDROME" << endl;
    }
    return 0;
}