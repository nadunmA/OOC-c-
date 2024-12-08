#include <iostream>
using namespace std;

class Book {
private:
    int bookId;
    string bookName;
    string author;

public:
    void setBookDetails(int bId, string bName, string bAuthor);
    void displayBookDetails();
    void setBookId(int bId);
};

void Book::setBookDetails(int bId, string bName, string bAuthor)
{
    bookId = bId;
    bookName = bName;
    author = bAuthor;
}

void Book::displayBookDetails()
{
    cout << "book id : " << bookId << endl;
    cout << "book name : " << bookName << endl;
    cout << "author : " << author << endl;
    cout << endl;
}

void Book::setBookId(int bId)
{
    bookId=bId;
}


int main()
{
    Book b1, b2, b3;

    b1.setBookDetails(1212, "jane", "bnm");
    b2.setBookDetails(1234, "vane", "asd");
    b3.setBookDetails(3456, "kopl", "ytu");

    int new1, new2, new3;

    cout << "input new book 1 : ";
    cin >> new1;

    cout << "input new book 2 : ";
    cin >> new2;

    cout << "input new book 3 : ";
    cin >> new3;

    b1.setBookId(new1);
    b2.setBookId(new2);
    b3.setBookId(new3);

    cout << endl;

    b1.displayBookDetails();
    b2.displayBookDetails();
    b3.displayBookDetails();
}

