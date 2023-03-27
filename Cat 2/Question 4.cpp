#include <iostream>
#include <string>
using namespace std;

class Subscriber{
    private:
    string name, phone;
    double airtime;

    public:
    Subscriber() {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your phone number: ";
        getline(cin, phone);
        cout << "Enter your airtime balance: ";
        cin >> airtime;
    }

    // Calculate bonus points based on airtime
    int compute_bonuspoints() const {
        if (airtime >= 2000.0) {
            return 500;
        } else if (airtime >= 1000.0) {
            return 300;
        } else if (airtime >= 500.0) {
            return 100;
        } else if (airtime >= 100.0) {
            return 50;
        } else {
            return 0;
        }
    }

    // Display subscriber information and bonus points
    void display_info() const {
        int bonus_points = compute_bonuspoints();
        cout << name << " (" << phone << "): AWARDED " << bonus_points << " BONGA POINTS. STAY WITH SAFARICOM. THE BETTER OPTION!" <<endl;
    }
};

int main() {
    // Create a new subscriber object
    Subscriber my_subscriber;

    // Display subscriber information and bonus points
    my_subscriber.display_info();

    return 0;
 }