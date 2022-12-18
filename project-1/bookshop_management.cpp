#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class book {
private:
	char* author, * title, * publisher;
	float* price;
	int* stock;
public:
	book() {
		author = new char[20];
		title = new char[20];
		publisher = new char[20];
		price = new float;
		stock = new int;
	}
	void datasourse();
	void editdata();
	void showdata();
	void buybook();
	int searchdata(char[], char[]);

};

void book::datasourse() {
	cin.ignore();
	cout << "\nEnter author name: ";      cin.getline(author, 20);
	cout << "Enter title name: ";       cin.getline(title, 20);
	cout << "Enter publisher name: ";   cin.getline(publisher, 20);
	cout << "Enter price: ";            cin >> *price;
	cout << "Enter stock position: ";   cin >> *stock;

}

void book::editdata() {

	cout << "\nEnter author name: ";      cin.getline(author, 20);
	cout << "Enter title name: ";       cin.getline(title, 20);
	cout << "Enter publisher name: ";   cin.getline(publisher, 20);
	cout << "Enter price: ";            cin >> *price;
	cout << "Enter stock position: ";   cin >> *stock;

}

void book::showdata() {
	cout << "\nAuthor name: " << author;
	cout << "\nTitle name: " << title;
	cout << "\nPublisher name: " << publisher;
	cout << "\nPrice: " << *price;
	cout << "\nStock position: " << *stock;

}

int book::searchdata(char author_buy[20],char title_buy[20]) {
	if (strcmp(author_buy, author)== 0 && strcmp(title_buy, title) == 0)
		return 1;
	else return 0;

}

void book::buybook() {
	int count;
	cout << "\nEnter number of books to buy: ";
	cin >> count;
	if (count <= *stock) {
		*stock = *stock - count;
		cout << "\nBook bought sucessfully";
		cout << "\nTotal amount:" << (*price) * count << " PLN";
	}
	else
		cout << "\nRequired books not in stock";
}

int main() {
	book* Book[20];
	int i = 0, a, b, choice;
	char titlebuy[20], authorbuy[20];
	while (1) {
		cout << "\n\n\t\tMENU"
			<< "\n1. Entry of new book"
			<< "\n2. Buy book"
			<< "\n3. Search for book"
			<< "\n4. Edit details of book"
			<< "\n5. Exit"
			<< "\n\nEnter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:	Book[i] = new book;
			Book[i]->datasourse();
			i++;	break;

		case 2: cin.ignore();
			cout << "Enter author of book: ";  cin.getline(authorbuy, 20);
			cout << "\nEnter title of book: "; cin.getline(titlebuy, 20);
			
			for (b = 0; b < i; b++) {
				if (Book[b]->searchdata(authorbuy,titlebuy)) {
					Book[b]->buybook();
					break;
				}
			}
			if (b == 1)
				cout << "\nThis book is not in stock";

			break;
		case 3: cin.ignore();
			cout << "Enter author of book: ";  cin.getline(authorbuy, 20);
			cout << "\nEnter title of book: "; cin.getline(titlebuy, 20);
			

			for (b = 0; b < i; b++) {
				if (Book[b]->searchdata(authorbuy, titlebuy)) {
					cout << "\nBook found successfully";
					Book[b]->showdata();
					break;
				}
			}
			if (b == i)
				cout << "\nThis book is not in stock";
			break;

		case 4: cin.ignore();
			cout << "Enter author of book: ";cin.getline(authorbuy, 20);
			cout << "\nEnter title of book: "; cin.getline(titlebuy, 20);
			

			for (b = 0; b < i; b++) {
				if (Book[b]->searchdata(authorbuy,titlebuy)) {
					cout << "\nBook found successfully";
					Book[b]->editdata();
					break;
				}
			}
			if (b == i)
				cout << "\nThis book is not in stock.Please choose another book or check the title or author's name";
			break;

		case 5: exit(0);
		default: cout << "\nInvalid choice entered";

		}
	}

	return 0;
}
