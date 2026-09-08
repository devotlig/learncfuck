#include <iostream>
#include <vector>
using namespace std;
class Solution
{

public:
    int numIslands(vector<vector<char>> &grid)
    {
        int islandnum = 0;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    islandnum++;
                    vector<int> i_idx = {i};
                    vector<int> j_idx = {j};
                    while (i_idx.size() != 0)
                    {
                        if (i_idx[0] >= 0 && i_idx[0] < grid.size() && j_idx[0] >= 0 && j_idx[0] < grid[i_idx[0]].size())
                        {
                            if (grid[i_idx[0]][j_idx[0]] == '1')
                            {
                                grid[i_idx[0]][j_idx[0]] = '0';
                                i_idx.push_back(i_idx[0] - 1);
                                j_idx.push_back(j_idx[0]);
                                i_idx.push_back(i_idx[0] + 1);
                                j_idx.push_back(j_idx[0]);
                                i_idx.push_back(i_idx[0]);
                                j_idx.push_back(j_idx[0] - 1);
                                i_idx.push_back(i_idx[0]);
                                j_idx.push_back(j_idx[0] + 1);

                            }
                        }
                        i_idx.erase(i_idx.begin());
                        j_idx.erase(j_idx.begin());
                    }
                }
            }
        return islandnum;
    }
};
int main()
{
    vector<vector<char>> grid = {
        {'1', '1', '1', '1', '0'},
        {'1', '1', '0', '1', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '0', '0', '0'}};
    Solution s;
    cout << s.numIslands(grid) << endl;
}