#include <vector>
#include <map>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int arraySize = nums.size();
        map<int, int> container;
        for (int i = 0; i < arraySize; i++)
        {
            int neededValue = target - nums[i];
            if (container.find(neededValue) != container.end())
            {
                return {container[neededValue], i};
            }
            container[nums[i]] = i;
        }
        return {};
    }

    vector<int> twoSumMethod2(vector<int> &nums, int target)
    {
        int i = 0;
        int j = nums.size()-1;
        while (i < j)
        {
            if (nums[i] + nums[j] > target)
            {
                j--;
            }
            else if (nums[i] + nums[j] < target)
            {
                i++;
            }
            else
            {
                return {i, j};
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
    cout << "Solution1::" << endl;
    for (auto i : sol)
    {
        cout << i;
    }

    vector<int> sol2 = solution.twoSumMethod2(nums, 6);
    cout << "\nSolution2::" << endl;

    for (auto i : sol2)
    {
        cout << i;
    }
}