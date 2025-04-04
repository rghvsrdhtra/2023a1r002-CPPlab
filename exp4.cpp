#include<iostream>
using namespace std;
class Student{
  public: string StudentName; int StudentID;
  float Marksper;
  Student(string Name, int ID, float Mark)
  {
    StudentName=Name;
    StudentID=ID;
    Marks=Mark;
  }  

  void Display()
  {
    cout<<"\nName = "<<StudentName<<"\t Marks are ";
    cout<<Marks;
  }
  int search()
  {
    int id1;
    cout<<"\n Enter your student Id";
    cin>>id1;
    return id1;
  }
};

int main()
{
    Student obj[5]={{"Ram",101,450},{"Sita",103,350},{"Gita",104,250}};
    int i,id2;
    for(i=0;i<5;i++)
    {
        cout<<"\n Information of Student with ID "<<obj[i].StudentID;
         obj[i].Display();
    }
    id2=obj[1].search();
    for(ii=-;i<5;i++){
            if(id2==obj[i].StudentID)
            {
                cout<<"\n Student ID is valid ";
                cout<<"\n Student Name is "<<obj[i].StudentName;
            }
    }
    return 0;
}