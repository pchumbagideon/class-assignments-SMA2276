#include <iostream>
#include <string>

class Vehicle {
private:
    std::string make;
    std::string model;
    std::string engine_number;
    double sale_price;

public:
    // Set vehicle details
    void set_vehicle(std::string make, std::string model, std::string engine_number, double sale_price) {
        this->make = make;
        this->model = model;
        this->engine_number = engine_number;
        this->sale_price = sale_price;
    }

    // Calculate and return profit
    double get_profit() const {
        double profit = sale_price * 0.15;
        return profit;
    }
};

int main() {
    // Create a new vehicle object
    Vehicle my_vehicle;

    // Set vehicle details
    my_vehicle.set_vehicle("Nissan", "Sunny", "12345678", 10000.0);

    // Calculate and display the profit
    double profit = my_vehicle.get_profit();
    std::cout << "Profit: $" << profit << std::endl;

    return 0;
}