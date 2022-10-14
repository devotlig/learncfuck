#include<iostream>
#include<string>
using namespace std;
main(){
    string firststring = "hello",secondstring = "world",myname;
    cin >> myname ;
    cout << firststring+" "+secondstring + myname << endl <<firststring.size()<<endl<<secondstring.length()<<endl<< secondstring[3] <<endl;
    return 0;
}