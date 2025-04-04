#include<iostream>
using namespace std;
class Student{
public: string StudentName; int StudentID;
float Marks,per;
public: Student(string Name, int ID, float mark){
               StudentName=Name;
               StudentID=ID;
               Marks=mark;
             }
    void Display(){
        cout<<"\nName = "<<StudentName<<"\t Marks are ";
        cout<<Marks;
    }
    char Grade(){
        per=Marks/500*100;
        if(per>=80&&per<=100){
            cout<<"\n Your Grade is A";
            return 'A';
        }else if(per>=70&&per<80){
            cout<<"\n Your Grade is B";
            return 'B';
        }else if(per>=60 && per<70){
            cout<<"\n Your Grade is C";
            return 'C';
        }else if(per>=50 && per<60)
        {
            cout<<"\n Your Grade is D";
            return 'D';
        }
        else{
            cout<<"\n Not Qualified ";
        }
    }
    void Club_Assignment (char grade){
        if(grade=='A'){cout<<"\n Sports Club";}
        else if(grade=='B'){cout<<"\n Eco Club";}
        else if(grade=='C'){cout<<"\n NCC Club";}
        else if(grade=='D'){cout<<"\n NSS Club";}
    }
    int search()
    {
        int id1;
        cout<<"\n Enter your student ID";
        cin>>id1;
        return id1;
    }

    public: ~Student(){
        cout<<"Destructor Invoked";
    }
};

int main()
{
    Student obj[5]={{"Ram",101,450},{"Sham",102,480},{"Sita",103,350},{"Gita",104,250},{"Raman",105,300}};
    int i,id2;char res;
    for(i=0;i<5;i++)
    {
        cout<<"\n Information of Student with ID "<<obj[i].StudentID;
        obj[i].Display();
        res=obj[i].Grade();
        obj[i].Club_Assignment(res);
    }
    id2=obj[1].search();
    for(i=0;i<5;i++)
    {
        if(id2==obj[i].StudentID){
            cout<<"\n Student ID is valid";
            cout<<"\n Student Name is: "<<obj[i].StudentName;
        }else{
            cout<<"\n Student ID is not valid";
        }
    }
    return 0;
}