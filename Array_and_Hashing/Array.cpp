#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(std::vector<int> &nums)
    {
        std::set<int> set;
        for (auto i : nums)
        {
            if (set.count(i))
            {
                return true;
            }
            set.insert(i);
        }
        return false;
    }

    bool isAnagram(std::string s, std::string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};
int main()
{
    Solution solution;
    std::vector<int> nums = {1, 2, 3, 4, 5, 1};
    std::vector<int> twoSumArr = {3, 3};

    std::cout << solution.containsDuplicate(nums) << std::endl;
    std::cout << solution.isAnagram("napple", "applen") << std::endl;


  
}

