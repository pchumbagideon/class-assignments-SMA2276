#include <iostream>

using namespace std;

class Computer {
public:
    string brand;
    int year;
    double price;

    void print() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
        cout << "Price: Ksh" << price << endl;
    }
};

class Client : public Computer {
public:
    int number_of_users;
    string operating_system;

    void print() {
        Computer::print();
        cout << "Number of Users: " << number_of_users << endl;
        cout << "Operating System: " << operating_system << endl;
    }
};

class Server : public Computer {
public:
    int number_of_cores;
    int ram;

    void print() {
        Computer::print();
        cout << "Number of Cores: " << number_of_cores << endl;
        cout << "RAM: " << ram << " GB" << endl;
    }
};

int main() {
    Client c1;
    c1.brand = "Apple";
    c1.year = 2021;
    c1.price = 100000.00;
    c1.number_of_users = 1;
    c1.operating_system = "macOS";

    Server s1;
    s1.brand = "Dell";
    s1.year = 2020;
    s1.price = 50000.00; 
    s1.number_of_cores = 8;
    s1.ram = 64;

    cout << "Client Computer:" << endl;
    c1.print();
    cout << endl;

    cout << "Server Computer:" << endl;
    s1.print();
    cout << endl;

    return 0;
}