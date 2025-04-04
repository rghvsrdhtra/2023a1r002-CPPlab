#include<iostream>
using namesapce std;
class Student{
public: string StudentName; int StudentID;
float Marks,per;
public: Student(string Name, int ID,float Mark)
{
    StudentName=Name;
    StudentID=ID;
    Marks=Mark;
}
void Display(){
    cout<<"Name = "<<StudentName<<"\t Marks are ";
    cout<<Marks;
}
};

int main()
{
    Student obj[5]={{"Ram",101,450},{"Sham",102,480},{"Sita",103,350},{"Gita",104,250}};
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"Information of Student with id "<<obj[i].StudentID;
        obj[i].Display();
    }
    return 0;
}