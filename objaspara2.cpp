/*Program to demonstrate the working of returning object from a function
1. Create a class with name bank
2. Create a member var balance
3. Create parameterized constructor
4. Create deposit() fn to add amount to balance var*/

#include<iostream>
using namespace std;

class bank{
     public: int balance;
     bank(int b)
     {
        balance=b;
     }  
     void show()
     {
        cout<<"The balance is: "<<balance<<endl;
     }
};

int main()
{
    bank a(1000);
    while(1)
    {
        cout<<"Welcome to the bank"<<endl<<"1. Show Balance"<<endl<<"2. Deposit"<<endl<<"3. Exit"<<endl<<"Enter your choice: "<<endl;
        int choice;
        cin>>choice;
        cout<<"\n";
        switch(choice)
        {
            case 1:
             a. show();
             break;
            case 2:
            cout<<"Enter the amout to amount to deposit: ";
              int n;
              cin>>n;
              a=deposit(n,a);
              break;
            case 3:
             cout<<"Exiting..."<<endl;
             return 0;
        }
    }
    return 0;
}