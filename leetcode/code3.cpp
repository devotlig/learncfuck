#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0,thislen = 0;
        unordered_map<char,int> charmap;
        for(int i = 0; i < s.size(); i++)
        {
            if(charmap.find(s[i]) != charmap.end())
            {
                
                thislen = min(++thislen, i - charmap[s[i]]);
                charmap[s[i]] = i;
            }
            else
            {
                charmap[s[i]] = i;
                thislen++;
            }
            maxlen = max(maxlen,thislen);
        }
        return maxlen;
    }
};

int main()
{
    string s= "abcdacb";
    Solution sol;
    cout << sol.lengthOfLongestSubstring(s) << endl;
    return 0;
}
