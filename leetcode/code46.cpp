#include <iostream>
#include <vector>
using namespace std;
class Solution
{
private:
    void C(vector<vector<int>> &ans, vector<int> temp, vector<int> rem)
    {
        if (rem.size() == 1)
        {
            temp.push_back(rem[0]);

            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < rem.size(); i++)
        {
            vector<int> erem = rem;
            vector<int> etemp = temp;
            etemp.push_back(rem[i]);
            erem.erase(erem.begin() + i);
            C(ans, etemp, erem);
        }
    }
    void backtrack(vector<vector<int>>& ans,vector<int>& temp , int nowtrack)
    {
        if(nowtrack == temp.size()-1)
        {
            ans.push_back(temp);
            return ;
        }
        backtrack(ans,temp,nowtrack+1);
        for(int i = nowtrack+1;i<temp.size();i++)
        {
            swap(temp[nowtrack],temp[i]);
            backtrack(ans,temp,nowtrack+1);
            swap(temp[nowtrack],temp[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> temp = {};
        //C(ans,temp , nums);
        backtrack(ans,nums,0);
        return ans;
    }
};
int main()
{
    vector<int> nums = {1, 2, 3};
    Solution s;
    vector<vector<int>> out;
    out = s.permute(nums);
    for (int i = 0; i < out.size(); i++)
    {
        for (int j = 0; j < out[i].size(); j++)
        {
            cout << out[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}