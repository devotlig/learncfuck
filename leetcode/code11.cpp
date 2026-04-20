#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left,right;
        int max_area = 0;
        left = 0;
        right = height.size() - 1;
        while(left < right)
        {
            if(height[left]<=height[right])
            {
                max_area = max(max_area,height[left]*(right-left)); 
                left++;
            }
            else
            {
                max_area = max(max_area,height[right]*(right-left));
                right--;
            }

        }
        return max_area;
    }
};
int main()
{
    Solution s;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << s.maxArea(height) << endl;
    return 0;
}