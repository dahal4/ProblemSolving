
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left=0;
        int right=height.size()-1;
        int maxContainer=0;
        while (left<right)
        {
            int result= (right-left)*min(height[left],height[right]);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
            if(result>maxContainer){
                maxContainer=result;
            }
        }
        return maxContainer;
    }
};

int main()
{
    Solution solution;
    vector<int> input ={1,8,6,2,5,4,8,3,7};
    cout << solution.maxArea(input) << endl;
}