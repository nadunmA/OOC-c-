#include <iostream>
#include <string>
using namespace std;

// Define the Book class
class Book {
private:
    int bookID;
    string bookName;
    string author;

public:
    // Method to set book details
    void setBookDetails(int id, string name, string writer);
    void displayBookDetails();
    void setBookID(int id);
   
};

// Method to set book details
void Book::setBookDetails(int id, string name, string writer) {
    bookID = id;
    bookName = name;
    author = writer;
}

// Method to display book details
void Book::displayBookDetails() {
    cout << "BookID = " << bookID << endl;
    cout << "BookName = " << bookName << endl;
    cout << "Author = " << author << endl;
}

// Method to set only the book ID
void Book::setBookID(int id) {
    bookID = id;
}

int main() {
  
    Book b1, b2, b3;

    b1.setBookDetails(1212, "Jane Eyre", "Charlotte Bronte");
    b2.setBookDetails(1234, "Divergent", "Veronica Roth");
    b3.setBookDetails(3456, "Matilda", "Roald Dahl");

   


    int newID1, newID2, newID3;
    cout << "Input new book ID 1: ";
    cin >> newID1;
    cout << "Input new book ID 2: ";
    cin >> newID2;
    cout << "Input new book ID 3: ";
    cin >> newID3;

 
    b1.setBookID(newID1);
    b2.setBookID(newID2);
    b3.setBookID(newID3);

    cout << endl;
 
    b1.displayBookDetails();
    b2.displayBookDetails();
    b3.displayBookDetails();

    return 0;
}


       