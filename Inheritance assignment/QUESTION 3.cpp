#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int age;
    string address;
};

class ICTStudent : public Student {
public:
    string programmingLanguage;
};

class LawStudent : public Student {
public:
    string areaOfLaw;
};

class BusinessStudent : public Student {
public:
    string areaOfBusiness;
};

class BSCITStage1Student : public ICTStudent {
public:
    string modulesTaken;
};

class BSCITStage2Student : public ICTStudent {
public:
    string modulesTaken;
};

class BSCITStage3Student : public ICTStudent {
public:
    string modulesTaken;
};

int main() {
    BSCITStage1Student s1;
    s1.name = "Gideon Pchumba";
    s1.age = 20;
    s1.address = "62000 NAIROBI";
    s1.programmingLanguage = "Java";
    s1.modulesTaken = "Programming Fundamentals";

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Address: " << s1.address << endl;
    cout << "Programming Language: " << s1.programmingLanguage << endl;
    cout << "Modules Taken: " << s1.modulesTaken << endl;

    return 0;
}