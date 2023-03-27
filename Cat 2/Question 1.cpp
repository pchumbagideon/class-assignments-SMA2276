#include <iostream>
#include <string>
#include <vector>

// Define the book class
class Book {
private:
    std::string author;
    double price;
    std::string title;
    int book_number;
    int num_copies;

public:
    // Constructor
    Book(std::string author, double price, std::string title, int book_number, int num_copies) {
        this->author = author;
        this->price = price;
        this->title = title;
        this->book_number = book_number;
        this->num_copies = num_copies;
    }

    // Accessor functions
    std::string get_author() const {
        return author;
    }

    double get_price() const {
        return price;
    }

    std::string get_title() const {
        return title;
    }

    int get_book_number() const {
        return book_number;
    }

    int get_num_copies() const {
        return num_copies;
    }

    // Mutator functions
    void add_copies(int n) {
        num_copies += n;
    }

    // Display book details
    std::string to_string() const {
        return "Book " + std::to_string(book_number) + " (" + title + " by " + author + "), " 
            + std::to_string(num_copies) + " copies available at $" + std::to_string(price);
    }
};

// Define the library class
class Library {
private:
    std::vector<Book> books; // Store books in a vector

public:
    // Add a new book to the database
    void add_book(std::string author, double price, std::string title, int book_number, int num_copies) {
        Book new_book(author, price, title, book_number, num_copies);
        books.push_back(new_book);
    }

    // Display a list of all books in the database
    void list_books() const {
        std::cout << "List of all books:" << std::endl;
        for (const Book& book : books) {
            std::cout << book.to_string() << std::endl;
        }
    }
};

// Main function to test the program
int main() {
    // Create a new library
    Library my_library;

    // Add some books to the database
    my_library.add_book("J.K. Rowling", 10.99, "Harry Potter and the Philosopher's Stone", 1001, 5);
    my_library.add_book("Dan Brown", 12.50, "The Da Vinci Code", 1002, 2);
    my_library.add_book("Stephen King", 9.99, "The Shining", 1003, 3);

    // Display the list of books
    my_library.list_books();

    // Add more copies of a book
    Book& first_book = my_library.books.at(0);
    first_book.add_copies(3);

    // Display the updated list of books
    my_library.list_books();

    return 0;
}
