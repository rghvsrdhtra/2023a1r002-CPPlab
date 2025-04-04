/****
Example;- Single level inheritance
Write a program to
a. Create a base class with name MyAPP
b. Create a function with name Welcome_Message(), to display welcome message on Screen
c. Create a function with Lgin(), accept pin from user and validate pin against value 123, other function will execute only after successful login of user
d. Create a function Accept(), store student information like, registation number, marks
e. Create a function Display() to display information entered by the student
f. Create a derived class with name Grade_Cal
g. Create a function Calc(), reads marks from MyApp class and function Cal() to calculate percentage and grades as per following:0 
Percentage between 80 to 100 A grade, 70 to 80 B grade, 60 to 70 C grade other wise not qualitifed.
h.create a new derived clas, Course_selection(),
i. create a function Select(), this function will accept grade from previous class and assign course according to the grade accquired by the student as per following criterias:-
GRADE A: Course Option:- Cyber Security,. net programming
Grade B: Course Option:- Ethical Hacking, Full Stack Development
Grade C: Course Option:- Mern Programming, AI/ML
***************************************/

#include <iostream>
#include <string>

class MyApp {
private:
    int pin;
protected:
    int regnum, marks;
    char grade;

public:
    MyApp() {
        pin = 0;
        regnum = 0;
        marks = 0;
        grade = ' ';
    }

    void Welcome_Message() {
        std::cout << "Welcome" << std::endl;
    }

    int Login(int pin) {
        if (pin == 123) {
            return 1;
        } else {
            return 0;
        }
    }

    void accept() {
        std::cout << "Enter your Registration Number: "<<std::endl;
        std::cin >> regnum;
        std::cout << "Enter Marks: "<<std::endl;
        std::cin >> marks;
    }

    void display() {
        std::cout << "Registration Number: " << regnum << std::endl
                  << "Marks: " << marks << std::endl;
    }
};

class Grade_Cal : public MyApp {
public:
    void Calc() {
        int percentage;
        percentage = (marks * 100) / 500;

        if (percentage >= 80 && percentage <= 100) {
            std::cout << "A Grade" << std::endl;
            grade = 'A';
        } else if (percentage >= 70 && percentage < 80) {
            std::cout << "B Grade" << std::endl;
            grade = 'B';
        } else if (percentage >= 60 && percentage < 70) {
            std::cout << "C Grade" << std::endl;
            grade = 'C';
        } else {
            std::cout << "Not Qualified" << std::endl;
            grade = 'F';
        }
    }

    char getGrade() {
        return grade;
    }
};

class Course_Selection : public Grade_Cal {
public:
    void select() {
        char grade = getGrade();
        if (grade == 'A') {
            std::cout << "Course Options:- Cyber Security, .NET Programming" << std::endl;
        } else if (grade == 'B') {
            std::cout << "Course Options:- Ethical Hacking, Full Stack Development" << std::endl;
        } else if (grade == 'C') {
            std::cout << "Course Options:- Mern Programming, AI/ML" << std::endl;
        } else {
            std::cout << "Not Applicable" << std::endl;
        }
    }
};

int main() {
    Course_Selection obj;
    int pin;

    std::cout << "Enter PIN: ";
    std::cin >> pin;

    if (obj.Login(pin)) {
        obj.Welcome_Message();
        obj.accept();
        obj.display();
        obj.Calc();
        obj.select();
    } else {
        std::cout << "Invalid PIN. Exiting..." << std::endl;
        return 0;
    }

    return 0;
}
