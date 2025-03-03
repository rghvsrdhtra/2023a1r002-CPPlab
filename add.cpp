#include <iostream>
class sum{
    int a,b,c;
    std::cout<<"Enter a value of A: ";
    std::cin>>a;

    std::cout<<"\nEnter a value of B: ";
    std::cin>>b;

    public:
    void sum()
    {
     c=a+b;
    }
    void output()
    { 
      std::cout<<"\nThe sum of a and b is: "<<c;
    }
};

int main()
{
   sum.obj;
   return 0;
}