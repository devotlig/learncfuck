#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int input;
    int count = 0;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        if(input == 126)
        {
            if(i == 0||i == n-1)
            {

            }
            else if(flag)
            {
                count++;
                cout<<(input^0x20)<<" ";
                flag = false;
            }
            else
            {
                flag = true;
            }
        }
        else if(flag)
        {
            cout<<(input^0x20)<<" ";
            flag = false;
            count++;
        }
        else if(input == 0x7D)
        {
            flag = true;
        }
        else
        {
            cout<<input<<" ";
            count++;
        }

    }
    cout<<endl<<count<<endl;
    return 0;
}