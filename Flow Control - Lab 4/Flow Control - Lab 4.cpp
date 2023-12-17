// Flow Control - Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	
	int num;
	unsigned long long factorial = 1;
	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> num;

	if (num < 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> num;
	}

	if (num >= 0) {
		cout << num << "!" << " = ";
		for (int n = 1; n <= num; ++n) {
			factorial *= n;
			cout << n;
			if (n < num)
			{
				cout << " * ";
			}
		}
		cout << " = " << factorial << endl;
	}
}
void arithmetic() {
	
	{
		int first, diff, terms, value, sum = 0;
		cout << "Arithmetic Series:" << endl;
		cout << "Enter a number to start at: ";
		cin >> first;
		cout << "";
		cout << "Enter a number to add each time: ";
		cin >> diff;
		cout << "";
		cout << "Enter the number of elements in the series: ";
		cin >> terms;

		value = first;

		for (int i = 0; i < terms; i++) {
			cout << value;
			sum += value;
			value = value + diff;
			if (i != terms - 1)
				cout << " + ";
			else
				cout << " = " << sum << endl;
		}
	}
}
void geometric() {
	
	{
		int a, r, m, value;
		double sum = 0;
		cout << "Geometric Series:" << endl;
		cout << "Enter a number to start at: ";
		cin >> a;
		cout << "";
		cout << "Enter a number to multiply by each time: ";
		cin >> r;
		cout << "";
		cout << "Enter the number of elements in the series: ";
		cin >> m;

		value = a;

		for (int i = 0; i < m; i++) {
			cout << value;
			sum += a * pow(r, i);
			value = value * r;
			if (i != m - 1)
				cout << " + ";
			else
				cout << " = " << sum << endl;
		}
	}
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}

		cout << "Go Again ? [Y / N]";
		cin >> again;

	} while (again == 'y' || again == 'Y');
}