#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employee_id;
    string first_name;
    string second_name;
    string surname;
    char gender;
    string date_of_birth;
    double monthly_basic_salary;
public:
    Employee(int id, string fn, string sn, string snn, char g, string dob, double mbs) {
        employee_id = id;
        first_name = fn;
        second_name = sn;
        surname = snn;
        gender = g;
        date_of_birth = dob;
        monthly_basic_salary = mbs;
    }
    void show_employee() {
        cout << "Employee ID: " << employee_id << endl;
        cout << "Name: " << first_name << " " << second_name << " " << surname << endl;
        cout << "Gender: " << gender << endl;
        cout << "Date of Birth: " << date_of_birth << endl;
        cout << "Monthly Basic Salary: " << monthly_basic_salary << endl;
    }
    friend double compute_pension(Employee emp);
};

double compute_pension(Employee emp) {
    double pension = emp.monthly_basic_salary * 0.05;
    return pension;
}

int main() {
    int id;
    string fn, sn, snn, dob;
    char g;
    double mbs;
    
    cout << "Enter employee ID: ";
    cin >> id;
    cin.ignore(); // ignore the newline character
    cout << "Enter first name: ";
    getline(cin, fn);
    cout << "Enter second name: ";
    getline(cin, sn);
    cout << "Enter surname: ";
    getline(cin, snn);
    cout << "Enter gender (M/F): ";
    cin >> g;
    cout << "Enter date of birth (dd-mm-yyyy): ";
    cin >> dob;
    cout << "Enter monthly basic salary: ";
    cin >> mbs;
    
    Employee emp_obj(id, fn, sn, snn, g, dob, mbs);
    emp_obj.show_employee();
    cout << "Pension Contribution: " << compute_pension(emp_obj) << endl;
    
    return 0;
}
