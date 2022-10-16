#include<iostream>
#include<cstring>
#include<string>
using namespace std;
string str1 = "this is a test of &";
string& changevalueofstring();
main()
{

    cout << "before:" <<str1 << endl;
    changevalueofstring() = "after & changed";
    cout << "fater:" << str1 <<endl;
}
string& changevalueofstring()
{
    return str1;
}