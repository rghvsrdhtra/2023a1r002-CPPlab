//Object as parameter
//Method 1 CALL BY VALUE(Passing object as parameter)
#include<iostream>
using namespace std;
class Program{
    public: int a;
    Program(int b){
        a=b;
    }
    void Display(){
        cout<<"value of a is "<<a;
    }
};

void modify(Program obj2)//obj2 is used as parameter to modify function(any change in side this function will not modify original object)
{
    obj2.a=20;
    obj2.Display();//Any change made by object 2 will not affect object 2 value
}
int main()
{ 
    Program obj1(10);//Orignal value passed by oject 1
    obj1.Display();
    modify(obj1);
}
/* IN CALL BY VALUE, any change inside the function accepting object as parameter will not modify 
the original object, this will create a separate copy of the class*/