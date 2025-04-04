/*CALL BY REFERENCE OBJ AS REF*/
#include <iostream>
using namespace std;
class Program{
   public: int a;
   Program(int b){
    a=b;
   }
   void Display() 
   {
    cout<<"Value of a is: "<<a;
   }
};

void modify(Program &obj2) /* obj2 reference is used as parameter to modify function(any change inside this function will not modify
                                the original object)*/
{
    obj2.a=20;//Any change made by object 2 will affect object 1 value
}

int main()
    { 
    Program obj1(10);//Orignal value passed by oject 1
    obj1.Display();
    modify(obj1);
    cout<<endl;
    obj1.Display();
    return 0;
}