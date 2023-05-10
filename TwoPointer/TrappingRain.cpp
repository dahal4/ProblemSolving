#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int leftMax = 0, rightMax = 0;
        int answer = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right)
        {
            if (height[left] < height[right])
            {
                if (height[left] >= leftMax)
                {
                    leftMax = height[left];
                }
                else
                {
                    answer += leftMax - height[left];
                }
                left++;
            }
            else
            {
                if(height[right]>=rightMax){
                    rightMax=height[right];
                }else{
                    answer += rightMax-height[right];
                }
                right--;
            }
        }
        return answer;
    }
};

int main()
{
    Solution solution;
    vector<int> input{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Total Trap : " << solution.trap(input) << endl;
}