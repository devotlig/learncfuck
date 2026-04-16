#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
    public: int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> lookup;
        int maxlen = 0;
        for(int i=0,j=0;i<s.size();i++){
            if(lookup.find(s[i])!=lookup.end()){
                j = min(j+1,i-lookup[s[i]]);
            }
            else
            {
                j++;
            }
            lookup[s[i]] = i;
            maxlen = max(maxlen,j);
        }
        return maxlen;
    }

};

int main(){
    Solution s;
    string str = "aaaaaaa";
    cout<<s.lengthOfLongestSubstring(str)<<endl;
    return 0;
}
