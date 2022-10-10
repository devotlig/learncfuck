#include<iostream>
/*
In this program,the first static is changeable,but the second one is not.
And then,I think I should create a folder for each program because the variable count is used in other program
2022.10.10
*/

//first static
static int CountNum = 10;

void Fuction(void);

 main()
 {
    while(CountNum --)
    Fuction();
 }


 void Fuction(void)
 {
    //second static
    static int i = 0;
    std::cout << "i is " << i++ << ",and count is " << CountNum << std::endl;
    
 }