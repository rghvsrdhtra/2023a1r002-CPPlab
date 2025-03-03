#include<iostream>

class Calculation{
    int num1,num2;
    public:
    Calculation(int x,int y)
    {
        num1=x;num2=y;
    }
    
    void multiplication()
    {
        std::cout<<"Multiplication: "<<(num1*num2)<<std::endl;
    }
    
    void addition()
    {
        std::cout<<"Additon: "<<(num1+num2)<<std::endl;
    }
    
    void division()
    {
        std::cout<<"Divison: "<<(num1/num2)<<std::endl;
    }
    void subtraction()
    {
        std::cout<<"Subtraction: "<<num1-num2<<std::endl;
    }        
};

int main()
{
    Calculation obj(3,2);
    obj.multiplication();
    obj.addition();
    obj.division();
    obj.subtraction();
    return 0;
}
