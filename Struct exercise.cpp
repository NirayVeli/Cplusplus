#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct books 
{
	string title;
	int year;
} mine, yours;

void printbook(books book)
{
	cout << book.title;
	cout << " (" << book.year << ")\n";
}

int main()
{
	string inputStr;

	mine.title = "Constantinople";
	mine.year = 2007;

	cout << "Enter title: ";
	getline(cin, yours.title);
	cout << "Enter year: ";
	getline(cin, inputStr);
	stringstream(inputStr) >> yours.year; //stringstream to parse the input(works like cin)

	cout << "My favorite book is: ";
	printbook(mine);
	cout << endl;

	cout << "And yours is: ";
	printbook(yours);
	
	return 0;
}