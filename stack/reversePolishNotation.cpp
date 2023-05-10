#include <iostream>
#include <stack>
#include <vector>
#include <math.h>
using namespace std;
class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> data;
        int answer = 0;
        for (auto token : tokens)
        {
            if (token == "+" || token == "-" || token == "*" || token == "/")
            {
                int val2 = data.top();
                data.pop();
                int val1 = data.top();
                data.pop();
                if (token == "+")
                {
                    answer = val1 + val2;
                }else if(token=="-"){
                    answer = val1 - val2;

                }else if(token=="*"){
                    answer = val1 * val2;

                }else if(token=="/"){
                    answer = val1/val2;
                }else{
                    cout<<"no ops"<<endl;
                }
                data.push(answer);
            }else{
                int val= stoi(token);
                data.push(val);
                answer=val;
            }

        }
        return answer;
    }
};

int main()
{
    Solution soln;
    vector<string> token = {"2","1","+","3","*"};
    int output = soln.evalRPN(token);
    cout << output << endl;
}