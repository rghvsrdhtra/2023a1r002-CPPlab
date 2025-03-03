#include<iostream>
using namespace std;
class Program{ //Class

public : ~Program() //Destructor

{
    cout<<"Default Destructor";
}

public : Program() //Constructor

{
    cout<<"Default Constructor";
}

};

int main()
{
    Program obj; //Class Object
    return 0;
}