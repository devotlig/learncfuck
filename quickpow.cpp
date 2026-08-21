#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public: long long quickpower(long long base,long long power,long long mod)
    {
        long long ans = 1;
        long long power2 = base;
        while(power)
        {
            if(power %2 )
            {
                ans = ans*power2%mod;
            }
            power >>= 1;
            power2 = (power2 * power2) % mod;
        }

        return ans;
    }
};

int main(void)
{
    long long base,power,mod;
    base = 114514;
    power = 1919810;
    mod = 1000000007;
    Solution s;
    cout <<s.quickpower(base,power,mod)<<endl;
}