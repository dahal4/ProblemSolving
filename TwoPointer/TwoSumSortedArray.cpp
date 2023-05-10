#include <vector>
#include <iostream>

using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0;
        int j = numbers.size() - 1;
        while (i < j)
        {
            if (numbers[i] + numbers[j] > target)
            {
                j--;
            }
            else if (numbers[i] + numbers[j] < target)
            {
                i++;
            }
            else
            {
                return {i + 1, j + 1};
            }
        }
        return {};
    }
};
int main()
{
    Solution solution;
    vector<int> nums = {3, 3};
    vector<int> sol = solution.twoSum(nums, 6);

    for (auto i : sol)
    {
        cout << i << " ";
    }
}