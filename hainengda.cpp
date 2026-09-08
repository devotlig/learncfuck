#include <iostream>
#include <string>
#include <vector>
using namespace std;
void output()
{
    while()
}

int main()
{
    string input;
    int N;
    long long num=0;
    string opt;
    cin >> N >> input;

    for(int i=input.size()-1;i>0;i--)
    {
        if(i>='0'&&i<='9')num=num<<4+i-'0';
        else num=num<<4+i-'A'+10;
    }
    for(int i=0;i<N;i++)
    {
        cin >> opt;
        if(opt == "READ")
        {
            int low,high;
            cin >> low >> high;
            long long out = num/low%(high-low);
        }
        if(opt == "WRITE")
        {
            int low,high,val;
            cin >> low >> high >> val;
            long long out = num&(INT64_MAX>>(high+1)<<(high+1)+INT64_MAX%(2<<low));
        }
    }
}