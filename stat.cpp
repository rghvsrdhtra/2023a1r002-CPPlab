/*Write A Program to create a class with name "countuser", 
create a function with name Count(), this function will 
display total number of users for this class. */

#include<iostream>
using namespace std;
class CountUser{
    public: 
    void Count()
    {
        static int a=0;
        a++;
        cout<<"This Function currently has "<<a<<" users"<<endl;
    }
};

int main()
{
    CountUser obj1;
    obj1.Count();
    CountUser obj2;
    obj2.Count();
    CountUser obj3;
    obj2.Count();
    return 0;
}