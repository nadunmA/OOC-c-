#include <iostream>
#include "book.h"
using namespace std;





int main()
{
    Book b1, b2, b3;

    b1.setBookDetails(1144, "jb", "cb");
    b2.setBookDetails(1233, "d", "vr");
    b3.setBookDetails(1332, "m", "rd");

    int newID1, newID2, newID3;
    cout << "Input new book ID 1: ";
    cin >> newID1;
    cout << "Input new book ID 2: ";
    cin >> newID2;
    cout << "Input new book ID 3: ";
    cin >> newID3;

    b1.setBookId();
    b2.setBookId();
    b3.setBookId();

    cout << endl;

    b1.displayBookDetails();
    b2.displayBookDetails();
    b3.displayBookDetails();
}


