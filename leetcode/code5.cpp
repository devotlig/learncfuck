#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        bool* dp = new bool[s.size()*s.size()];
        int maxstrat,maxend;
        for(int i=0;i<s.size();i++){
            dp[i*s.size()+i] = true;
            maxstrat = i;
            maxend = i;
        }

    }
};

int main(){
    Solution s;
    string str = "babad";
    cout<<s.longestPalindrome(str)<<endl;
    return 0;
}