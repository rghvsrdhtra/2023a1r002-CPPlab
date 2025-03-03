#include<iostream>
using namespace std;
class Program{ //Class

public : ~Program() //Destructor

{
    cout<<"Default Destructor";
}
};
int main()
{
    Program obj; //Class Object
    return 0;
}