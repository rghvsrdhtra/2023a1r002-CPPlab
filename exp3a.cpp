// to update the details of a student using a member function of a student class
/*create a student class with a parametrized constructor , and details of 5 students with attributes like name , rollno , marks , credits
create a display function to display records on screen
create three functions semester 1()
  semester 2()
  semester 3()
  all three semester functions stores copy of marks attribute with them and retrieve value of name , rollno , credits from student class
  create update function attributes of students class
  create delete function() to delete student record*/

#include <iostream>
using namespace std;

class student
{

public:
    string StudentName;
    int rollnumber;
    float credits;
    float Marks;

    student(string Name, int cred, float Mark, int rollnum)
    {
        StudentName = Name;
        rollnumber = rollnum;
        credits = cred;
        Marks = Mark;
    }
    void Display()
    {
        cout << "\nName = " << StudentName << "\t roll number " << rollnumber << "\t Marks are " << Marks << "credits are " << credits;
    }
};
void semester1(student sem1) // object as pass by value
{
    sem1.Marks = 400;
    cout << "\n Semester result is \n ";
    cout << " name is\t " << sem1.StudentName << "\t rollnum is " << sem1.rollnumber;
    cout << " marks is\t " << sem1.Marks << "\t credits is " << sem1.credits;
}
void semester2(student sem2) // object as pass by value
{
    sem2.Marks = 450;
    cout << "\n Semester result is \n ";
    cout << " name is\t " << sem2.StudentName << "\t rollnum is " << sem2.rollnumber;
    cout << " marks is\t " << sem2.Marks << "\t credits is " << sem2.credits;
}

void semester3(student sem3)
{
    sem3.Marks = 350;
    cout << "\n Semester result is \n ";
    cout << " name is\t " << sem3.StudentName << "\t rollnum is " << sem3.rollnumber;
    cout << " marks is\t " << sem3.Marks << "\t credits is " << sem3.credits;
}
void update(Student &obj)
{
    obj.Marks= 200;
    obj.StudentName = "ABC";
    obj.display();
}

void delete(Student &pobj)
{
    pobj->Marks =0.0;
    pobj->Name=" ";
    pobj->Credits=0.0;
    pobj->RollNo=0;
}
int main()
{
    student obj("XYZ",101,0,5);
    obj.Display();
    Semester1(obj);
    Semester2(obj);
    Semester3(obj);
    Update(obj);
    Delete(&obj);
    obj.Display();
    reutrn 0;
}