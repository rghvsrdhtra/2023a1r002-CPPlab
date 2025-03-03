#include <iostream>
#include <string>
class students{
    private: int rollno; std::string name; char section; int sectnumb;
    public:
    void student(int rollno,const std::string& name,char section,int sectnumb){
        std::cout<<"Student Name: "<<name<<std::endl<<"Roll No: "<<rollno<<std::endl<<"Section: "<<section<<sectnumb<<std::endl;
    }/* const means constant telling compiler NOT to change it. for string; declaration is std::string& <stirngname> */
};

class Course{
    private: std::string coursename; std::string coursecode;
    public:
    void Courses(const std::string& coursename,const std::string& coursecode)
    {
        std::cout<<"CourseName: "<<coursename<<std::endl<<"Course Code: "<<coursecode<<std::endl; //Printing the courname andcode

    }
};

int main()
{
    int rollno;
    std::cout<<"Enter Roll No: "<<std::endl;
    std::cin>>rollno;
    std::cin.ignore();//ignored newline input. if don't add it here then getline will consider std::endl aka empty newline as your input
    std::string name;//stirng declaration
    std::cout<<"Enter Student Name: "<<std::endl;
    std::getline(std::cin, name); //takes input of string
    char section;
    std::cout<<"Enter Section Name: ";
    std::cin>>section;
    int sectnumb;
    std::cin>>sectnumb;
    students obj1;
    
    
    Course obj2;
    std::string coursename;
    std::cin.ignore(); //ignore newline for getline input
    std::cout<<"Enter course name: "<<std::endl;
    std::getline(std::cin,coursename);

    std::string coursecode;
    /************************************************************************************
     I removed cin.ignore() here since it was causing issues where it wasn't Printing
     the first letter of Course code. 
     According to ChatGPT:
     `When you call std::getline(std::cin, coursecode), the std::cin.ignore() statement 
     is consuming the newline character left by the previous input (coursename), but it 
     also skips over the first character of the coursecode. This happens because it 
     interacts with input and input buffer differently. After you called getline to read
     coursename,\n is still in buffer so if cin.ignore() is called again this buffer gets
     consumed and removes first letter from your input
    **************************************************************************************/
    std::cout<<"Enter Course Code: "<<std::endl;
    std::getline(std::cin, coursecode);

    obj1.student(rollno,name,section,sectnumb);
    obj2.Courses(coursename,coursecode);

    return 0; 
} 