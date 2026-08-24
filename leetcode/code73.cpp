#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool Iscol0set0=false;
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][0]==0)Iscol0set0=true;
            for(int j=1;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[i].size();j++)
            {
                if(matrix[i][0]==0||matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0)
        {
            for(int i=0;i<matrix[0].size();i++)matrix[0][i]=0;
        }
        if(Iscol0set0)
        {
            for(int i=0;i<matrix.size();i++)matrix[i][0]=0;
        }
        
    }
};
int main()
{
    vector<vector<int>> input ={{0},{1},{2},{0}};
    Solution obj;
    obj.setZeroes(input);
    for(int i=0;i<input.size();i++)
    {
        for(int j=0;j<input[i].size();j++)
            cout<<input[i][j]<< " ";
        cout<<endl;
    }
    
}