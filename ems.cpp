/****************************************************
 WRITE A PROGRAM FOR EMPLOYEE MANAGEMENT SYSTEM
 a. Create a class with Name Employee
 b. Create a parametrized constructor to initialize class atrtributes like, employee name, employee code, basic salary.
 c. Create a member function Display() to display records on screen.
 d. Create a function Gross_Salary() which calculates components of Salary like 
 TA(3% of Basic Salary),DA(4% of Basic Salary),HRA(5% of Basic Salary), PF(4% of Basic Salary). 
 Gross Salary is sum of Basic, TA,DA,HRA. PF is deducted from Gross Salary.alignase. Create a function Update() to increment Basic Salary of Employees as:-
 Gross Salary between 10000 to 20000, 10% of increment
 Gross Salary between 20000 to 30000, 15% of increment
 Gross Salary above 30000, 20% increment
 f. Create a function Update_Profle(), if user wants to correct its name or code.
 g. Create a function with name Get_Data() that only reads Employee Data but not able to modify user data. 
 *****************************************************/

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int code;
    double basicSalary;
    double grossSalary;
    double pf;

public:
    // Parameterized Constructor
    Employee(string empName, int empCode, double empSalary)
        : name(empName), code(empCode), basicSalary(empSalary) {
        calculateGrossSalary();
    }

    // Function to calculate Gross Salary and PF
    void calculateGrossSalary() {
        double ta = 0.03 * basicSalary;
        double da = 0.04 * basicSalary;
        double hra = 0.05 * basicSalary;
        pf = 0.04 * basicSalary;

        grossSalary = basicSalary + ta + da + hra;
        grossSalary -= pf; // Deducting PF
    }

    // Function to display employee details
    void Display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Code: " << code << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "PF Deduction: " << pf << endl;
    }

    // Function to update salary based on gross salary
    void Update() {
        if (grossSalary >= 10000 && grossSalary < 20000) {
            basicSalary += basicSalary * 0.10;
        } else if (grossSalary >= 20000 && grossSalary < 30000) {
            basicSalary += basicSalary * 0.15;
        } else if (grossSalary >= 30000) {
            basicSalary += basicSalary * 0.20;
        }
        calculateGrossSalary();
        cout << "Salary updated successfully.\n";
    }

    // Function to update employee profile (name or code)
    void Update_Profile(string newName, int newCode) {
        name = newName;
        code = newCode;
        cout << "Profile updated successfully.\n";
    }

    // Function to get employee data (read-only)
    void Get_Data() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Code: " << code << endl;
    }
};

// Main function
int main() {
    string empName;
    int empCode;
    double empSalary;

    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, empName);
    
    cout << "Enter Employee Code: ";
    cin >> empCode;
    
    cout << "Enter Basic Salary: ";
    cin >> empSalary;

    // Create Employee object
    Employee emp(empName, empCode, empSalary);

    // Display employee details
    emp.Display();

    // Update salary
    emp.Update();
    emp.Display();

    // Update profile
    string newName;
    int newCode;
    cout << "Enter new Employee Name: ";
    cin.ignore();
    getline(cin, newName);
    
    cout << "Enter new Employee Code: ";
    cin >> newCode;

    emp.Update_Profile(newName, newCode);

    // Display updated profile
    emp.Get_Data();

    return 0;
}
