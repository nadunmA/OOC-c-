#include <iostream>
#include "book.h"
using namespace std;

void Book::setBookDetails(int bId, string bName, string bAuthr)
{
	bookId = bId;
	bookName = bName;
	author = bAuthr;
}

void Book::displayBookDetails()
{
	cout << "book id : " << bookId << endl;
	cout << "book name : " << bookName << endl;
	cout << "author : " << author << endl;
}

void Book::setBookId() {

	int id;

	bookId = id;

}

