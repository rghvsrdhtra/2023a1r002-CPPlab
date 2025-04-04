#Include<iostream>using namespace std;
class Program{
    public: int a=1;
    void display(0
    {
        cout<<"\n Value of a is "<<a;
    }
};
Program& modify(Program& obj1)
{
    obj1.a=6;
    return obj1;
}

int main()
{
    Program obj2;
    obj2.display();
   Program& obj3 = modify(obj2);
   obj3.display();
   return 0;
}