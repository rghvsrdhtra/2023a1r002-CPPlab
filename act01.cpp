#include<iostream>

class student{
    public:
    student()
    {
        std::cout << "5 " << std::endl;
        std::cout << "Raghav ";
        std::cout << "A3 ";
    }
    ~student()
    {
        std::cout<<"Object Student Destroyed"<<std::endl;
    }
};

class Course{
    public:
    Course()
    {
        std::cout << "CSE ";
        std::cout << "COM - 301 "<<std::endl;
    }
    ~Course(){
        std::cout<<"Object Course Destroyed"<<std::endl;
    }
};

int main()
{
   student s;
   std::cout<<std::endl;
   Course c;
   return 0;
}