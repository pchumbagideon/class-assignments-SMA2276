#include <iostream>
#include <string>

class Voter {
private:
    std::string voter_card_id;
    std::string national_id;
    std::string first_name;
    std::string middle_name;
    std::string surname;
    std::string polling_station;
    std::string date_of_birth;
    std::string gender;

public:
    // Constructor
    Voter(std::string voter_card_id, std::string national_id, std::string first_name,
          std::string middle_name, std::string surname, std::string polling_station,
          std::string date_of_birth, std::string gender)
    {
        this->voter_card_id = voter_card_id;
        this->national_id = national_id;
        this->first_name = first_name;
        this->middle_name = middle_name;
        this->surname = surname;
        this->polling_station = polling_station;
        this->date_of_birth = date_of_birth;
        this->gender = gender;
    }

    // Default constructor, prompts for input
    Voter()
    {
        std::cout << "Enter voter details:" << std::endl;
        std::cout << "Voter Card ID: ";
        std::getline(std::cin, voter_card_id);
        std::cout << "National ID: ";
        std::getline(std::cin, national_id);
        std::cout << "First Name: ";
        std::getline(std::cin, first_name);
        std::cout << "Middle Name: ";
        std::getline(std::cin, middle_name);
        std::cout << "Surname: ";
        std::getline(std::cin, surname);
        std::cout << "Polling Station: ";
        std::getline(std::cin, polling_station);
        std::cout << "Date of Birth (dd-mm-yyyy): ";
        std::getline(std::cin, date_of_birth);
        std::cout << "Gender: ";
        std::getline(std::cin, gender);
    }

    // Display voter details
    void display_info() const {
        std::cout << "Voter Details" << std::endl;
        std::cout << "Voter Card ID: " << voter_card_id << std::endl;
        std::cout << "National ID: " << national_id << std::endl;
        std::cout << "Name: " << first_name << " " << middle_name << " " << surname << std::endl;
        std::cout << "Polling Station: " << polling_station << std::endl;
        std::cout << "Date of Birth: " << date_of_birth << std::endl;
        std::cout << "Gender: " << gender << std::endl;
    }
};

int main() {
    // Create a new voter object
    Voter my_voter;

    // Display voter details
    my_voter.display_info();

    return 0;
}
