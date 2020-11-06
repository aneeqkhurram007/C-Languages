#include <iostream>
#include <string>
using namespace std;
#include "books.h"
int main()
{

	books book;
	book.setId(100);
	cout << book.getId() << endl;
}