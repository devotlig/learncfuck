#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{

private:
    void DFS(vector<vector<char>> *g, int i, int j){
        if (i >= 0 && i < (*g).size() && j >= 0 && j < (*g)[i].size())
            if ((*g)[i][j] == '1')
            {
                (*g)[i][j] = '0';
                DFS(g, i - 1, j);
                DFS(g, i, j - 1);
                DFS(g, i + 1, j);
                DFS(g, i, j + 1);
                
            }
    }

public:
    int numIslands(vector<vector<char>> &grid)
    {
        int landnum = 0;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j]=='1')
                {
                    DFS(&grid,i,j);
                    landnum++;
                }
            }
            return landnum;
    }
};

int main()
{
    vector<vector<char>> grid = {
            {'1','1','1','1','0'},
            {'1','1','0','1','0'},
            {'1','1','0','0','0'},
            {'0','0','0','0','0'}
    };
    Solution s;
    cout << s.numIslands(grid)<<endl;
}
