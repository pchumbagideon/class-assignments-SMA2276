#include<iostream>
using namespace std;

class Person {
    private:
        int age;
        string firstname;
        string lastname;
    
    public:
        Person(int age, string firstname, string lastname) {
            this->age = age;
            this->firstname = firstname;
            this->lastname = lastname;
        }
        
        void getValues() {
            cout << "Age: " << age << endl;
            cout << "First name: " << firstname << endl;
            cout << "Last name: " << lastname << endl;
        }
        
        void setValues(int age, string firstname, string lastname) {
            this->age = age;
            this->firstname = firstname;
            this->lastname = lastname;
        }
};

class Student : public Person {
    private:
        string institution;
        int year;
        int regNumber;
    
    public:
        Student(int age, string firstname, string lastname, string institution, int year, int regNumber) : Person(age, firstname, lastname) {
            this->institution = institution;
            this->year = year;
            this->regNumber = regNumber;
        }
        
        void getValues() {
            Person::getValues();
            cout << "Institution: " << institution << endl;
            cout << "Year of study: " << year << endl;
            cout << "Registration number: " << regNumber << endl;
        }
        
        void setValues(int age, string firstname, string lastname, string institution, int year, int regNumber) {
            Person::setValues(age, firstname, lastname);
            this->institution = institution;
            this->year = year;
            this->regNumber = regNumber;
        }
};

int main() {
    Student s(22, "Gideon", "Pchumba", "JKUAT University", 3,0043);
    s.getValues();
    return 0;
}