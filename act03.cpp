#include<iostream>
#include<string>
#include<cstdlib>
class Student{
  private: int rollno;std::string name;char section; int sectno;
  public:

  void Display(int rollno,const std::string& name,char section,int sectno)
  {
    std::cout<<"Student Name: "<<name<<std::endl<<"Roll No. "<<rollno<<std::endl<<"Section: "<<section<<sectno<<std::endl;
  }
  
  void Update(int &rollno,std::string &name,int &sectno, int choice)
  {
    int updatedinfo;
    std::string newname;
    if(choice==1) {
                   std::cout<<"Enter The Updated Roll No: "<<std::endl;
                   std::cin>>updatedinfo;
                   rollno=updatedinfo;
                  }
    else if(choice==2)
                  {
                   std::cout<<"Enter The Updated Name: "<<std::endl;
                   std::cin.ignore();
                   std::getline(std::cin,newname);
                   name=newname;
                  }
    else if(choice==3)
                  {
                   std::cout<<"Enter The Updated Section Number: "<<std::endl;
                   std::cin>>updatedinfo;
                   sectno=updatedinfo;
                  }
    else          {
                   std::cerr<<"Invalid Input!!"<<std::endl;
                   exit(1);
                  }
  }  

  void Choice(int &choice)
  {
    int tempchoice, tempchoice2;
    std::cout<<"Do You Want to Update information?"<<std::endl<<"1. Yes"<<std::endl<<"2. No"<<std::endl;
    std::cin>>tempchoice;
    if(tempchoice==1)
    {
        std::cout<<"Select Data to be updated"<<std::endl<<"1. Rollno"<<std::endl<<"2. Name"<<std::endl<<"3. Section"<<std::endl;
        std::cin>>tempchoice2;
        if(tempchoice2==1 || tempchoice2==2 || tempchoice2==3)
        {
            choice=tempchoice2;
        }
        else{
            std::cerr<<"Invalid Input!!"<<std::endl;
            exit(1);
            }
    }else if(tempchoice==2){
        std::cout<<"exiting update function.."<<std::endl;
        return;
    }
    else{
        std::cerr<<"Invalid Input!!"<<std::endl;
        exit(1);
    }
  }

  void Delete(int &rollno, int choice)
  {
    std::cout<<"Do you want to delete the value?"<<std::endl<<"1. Yes"<<std::endl<<"2. No"<<std::endl;
    std::cin>>choice;
    switch(choice)
    {
        case 1: 
        rollno=0;
        break;
        case 2:
        break;
        default:
        std::cout<<"Invalid Choice";
        break;
    }
  }
};

int main()
{
    int rollno,sectno;
    std::string name;
    char section;
    std::cout<<"Enter rollno: "<<std::endl;
    std::cin>>rollno;
    std::cin.ignore();
    
    std::cout<<"Enter Student Name: "<<std::endl;
    std::getline(std::cin,name);
    
    std::cout<<"Enter Section Name: ";
    std::cin>>section;
    std::cin>>sectno;

    Student obj1;
    int choice;
    obj1.Choice(choice);
    obj1.Update(rollno,name,sectno,choice);
    obj1.Display(rollno,name,section,sectno);    
    return 0;
}
