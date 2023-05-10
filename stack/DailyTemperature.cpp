#include <iostream>
#include <stack>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> solutions;
        stack<int> temp;
        int first =temperatures.at(0);
        for (int i=0;i<temperatures.size();i++){
            
        }
    }
};
int main(){
    Solution soln;
    vector<int> temperature ={20,30,40,50};
    vector<int> answer = soln.dailyTemperatures(temperature);

    for(auto ans:answer){
        cout<<ans;
    }
}