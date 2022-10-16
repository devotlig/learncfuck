#include <iostream>
#include <string>
using namespace std;

/*
以下是一个很典型的报错，其中我把Cat的Rename类错写成了返回值为float类型，此时报错有三行，一行是显示类未定义，第二行说类中的的方法没有实现，第三行说这个错误是在哪个类中定义的
E:\Softwares\mingw\bin\g++.exe -fdiagnostics-color=always -g F:\learncfuck\classbegining\classbeginging.cpp -o F:\learncfuck\classbegining\classbeginging.exe
F:\learncfuck\classbegining\classbeginging.cpp:50:7: error: no declaration matches 'float Cat::Rename(std::__cxx11::string)'
 float Cat::Rename(string name)
       ^~~
F:\learncfuck\classbegining\classbeginging.cpp:15:12: note: candidate is: 'std::__cxx11::string Cat::Rename(std::__cxx11::string)'
     string Rename(string name);
            ^~~~~~
F:\learncfuck\classbegining\classbeginging.cpp:6:7: note: 'class Cat' defined here
 class Cat
       ^~~
*/


class Cat
{
    public:
    Cat(string name);
    string GetString();
    float GetHeight(void);
    float GetWeight();
    float SetHeight(float height);
    float SetWeight(float weight);
    string Rename(string name);
    private:
    float Height;
    float Weight;
    string Name;
};

Cat::Cat(string name)
{
    Name = name;
    cout << "The name of this cat is:" << name << endl;
}

float Cat::GetHeight()
{
    return Height;
}

float Cat::GetWeight()
{
    return Weight;
}

float Cat::SetHeight(float height)
{
    Height = height;
    return Height;
}

float Cat::SetWeight(float weight)
{
    Weight = weight;
    return Weight;
}

string Cat::Rename(string name)
{
    Name = name;
    return Name;
}

main()
{
    Cat mycat("xiaohua");
    mycat.SetWeight(2.0);
    mycat.SetHeight(0.6);
    cout << "The height of this cat is " << mycat.GetHeight() << endl;
    cout << "The weight of this cat is " << mycat.GetWeight() << endl;
    cout << "Rename the cat :" ;
    string Newname;
    cin >> Newname;
    cout << "New name of this cat is " << mycat.Rename(Newname) << endl;
}