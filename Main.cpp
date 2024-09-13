#include <iostream>
#include <conio.h>

using namespace std;

struct Book
{
	string title;
	string author;
	int yearPublished;
	int numPages;
};

int main() {

	const int NUM_BOOKS = 4;
	Book tolkienbooks[NUM_BOOKS] =
	{
		{"The Hobbit", "J.R.R. Tolkien", 1937, 310},
		{"The Fellowship of the Ring", "J.R.R. Tolkien", 1954, 423 },
		{"The Two Towers", "J.R.R. Tolkien", 1954, 352},
		{"The Return of the King", "J.R.R. Tolkien", 1955, 416}
	};



	for (int i = 0; i < NUM_BOOKS; i++)
	{
		cout << (i + 1) << ". " << tolkienbooks[i].title << "\n";
		cout << "Author: " << tolkienbooks[i].author << "\n";
		cout << "Year Published: " << tolkienbooks[i].yearPublished << "\n";
		cout << "Number of Pages: " << tolkienbooks[i].numPages << "\n\n";

	}

	int bookChoice;
	string authorUpdate;
	int yearUpdate;
	int pagesUpdate;
	string save;


		cout << " Enter the ID of the book you would like to update (1-4): ";
		cin >> bookChoice;

		if (bookChoice > NUM_BOOKS)
		{
			cout << "That book is not in the library.";
			
		}

		else {
			cout << bookChoice << "." << tolkienbooks[bookChoice - 1].title << "\n";
			cout << "Enter the Author : ";
			cin >> authorUpdate;
			cout << " Enter the Year Published : ";
			cin >> yearUpdate;
			cout << "Enter the Number of Pages : ";
			cin >> pagesUpdate;
			cout << "Save these changes? (Y/N) ";
			cin >> save;
		}

		if (save == "Y")
		{
			cout << bookChoice << "." << tolkienbooks[bookChoice - 1].title << "\n";
			cout << "Author: " << authorUpdate << "\n";
			cout << "Year Published: " << yearUpdate << "\n";
			cout << "Number of Pages: " << pagesUpdate << "\n";

		}
		else if (save == "N")
		{
			exit(0);
		}

		

	

	(void)_getch;
	return 0;
}