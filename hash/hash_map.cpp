#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int> myhashmap;
    myhashmap[1] = 10;
    myhashmap[2] = 20;
    cout << "value of key 1 is: " << myhashmap[1] << endl;
    cout << "value of key 2 is: " << myhashmap[2] << endl;
    cout<< "value of key 3 is: " << myhashmap[3] << endl; //访问不存在的键会创建一个新的键值对，值为默认值0
    return 0;
}