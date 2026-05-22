#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> sum(nums.size()+1,0);
        int count = 0;
        int sumthis;
        sum[0] = nums[0];
        if(sum[0] == k) count++;
        for(int i = 1;i<nums.size();i++)
        {
            sumthis = sum[i] = sum[i-1] + nums[i];
            if(sumthis == k) count++;
            for(int j = 0; j < i; j++)
            {
                sumthis -= nums[j];
                if(sumthis == k) count++;
            }
        }
        return count;
    }
};
main()
{
    Solution s;
    vector<int> nums = {1,2,3};
    cout << s.subarraySum(nums,3) << endl;
    return 0;
}