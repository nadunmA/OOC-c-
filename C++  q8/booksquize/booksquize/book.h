#include <iostream>
using namespace std;

class Book {
private:
	int bookId;
	string bookName;
	string author;

public:
	void setBookDetails(int bId, string bName, string bAuthr);
	void displayBookDetails();
	void setBookId();
};