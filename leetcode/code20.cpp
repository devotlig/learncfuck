#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack = {};
        for(auto il = s.begin();il != s.end();il++)
        {
            if(*il == '{'||*il == '('||*il == '[')
            {
                stack.push_back(*il);
            }
            else if(*il == '}')
            {
                if(stack.empty()||stack.back()!='{')return false;
                else stack.pop_back();
            }
            else if(*il == ')')
            {
                if(stack.empty()||stack.back()!='(')return false;
                else stack.pop_back();
            }
            else if(*il == ']')
            {
                if(stack.empty()||stack.back()!='[')return false;
                else stack.pop_back();
            }
        }
        if(stack.empty())return true;
        else return false;
    }
};

int main()
{
    string in = "]";
    Solution s;
    cout << s.isValid(in) << endl;
}