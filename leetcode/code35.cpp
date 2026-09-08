#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int searchInsert1(vector<int>& nums, int target) {
        int l =0 ,r = nums.size()-1;
        if(target>nums[r])
        {
            return r+1;
        }
        else if(nums[l]==target)
        {
            return l;
        }
        else if(nums[r]==target)
        {
            return r;
        }
        else if(target<nums[l])
        {
            return 0;
        }
        int ans=r;
        while(r-l)
        {
            cout << l << " " << r << " " << (r-l)/2+l << endl;
            if(nums[(r-l)/2+l]==target)
            {
                return (r-l)/2+l;
            }
            else if(nums[(r-l)/2+l]>target)
            {
                ans = (r-l)/2+l;
                r = (r-l)/2+l ;
                
            }
            else if(nums[(r-l)/2+l]<target)
            {
                ans = (r-l)/2+l + 1;
                l = (r-l)/2+l + 1;
                   
            }
            
        }
        return ans;
    }
    int searchInsert2(vector<int>& nums, int target) {
    
        int l = 0,r = nums.size()-1;
        if(target <=nums[l])return l;
        else if(target==nums[r])return r;
        else if(target>nums[r])return r+1;

        while(r-l>1)
        {
            if(nums[(r-l)/2+l]==target)return (r-l)/2+l;
            else if(nums[(r-l)/2+l]>target)r = (r-l)/2+l;
            else l = (r-l)/2+l;
        }
        return r;
    }
    int searchInsert(vector<int>& nums, int target) {
        int l =0 ,r = nums.size()-1;
        if(target>nums[r])
        {
            return r+1;
        }
        else if(nums[l]==target)
        {
            return l;
        }
        else if(nums[r]==target)
        {
            return r;
        }
        else if(target<nums[l])
        {
            return 0;
        }
        while(r-l>1)
        {
            if(nums[(r+l)/2]==target)
            {
                return (r+l)/2;
            }
            else if(nums[(r+l)/2]>target)
            {
                r = (r+l)/2;
            }
            else{
                l = (r+l)/2;
            }
        }
        if(nums[l]==target)
        {
            return l;
        }
        else if(nums[r]==target)
        {
            return r;
        }
        else
        {   
            return l+1;
        }
    }
};
int main()
{
    vector<int> nums = {1,3,4,5,10};
    int target = 2;
    Solution s;
    cout << s.searchInsert(nums,target) << endl;
    return 0;
}