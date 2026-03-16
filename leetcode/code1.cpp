#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        unordered_map<int,int> hashmap;
        for(i=0;i<nums.size();i++)
        {
            if(hashmap.find(target-nums[i])!=hashmap.end())
            {
                vector<int> answer{hashmap[target-nums[i]],i};
                return answer;
            }
            else
            {
                hashmap[nums[i]] = i;
            }
        }
        return {};
    }
};

int main(){
    Solution solution;
    vector<int> input{1, 2, 3, 4, 5};
    int target = 3;
    vector<int> result = solution.twoSum(input, target);
    for(auto num = result.begin();num!=result.end();num++)
    {
        cout << *num << " ";
    }
    cout <<endl;
    return 0;
}