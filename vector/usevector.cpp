#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector define
    vector<int> myv1(5);
    vector<int> myv2(2,10);
    cout<< myv1[1] << endl;
    cout<< "size of myv2 is:" << myv2.size() << ", value is: " << myv2[0] << endl;
    myv2.push_back(20);
    cout<< "size of myv2 is:" << myv2.size() << ", value is: " << myv2[2] << endl;
    return 0;
}