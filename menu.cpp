#include "menu.hpp"

int outerMenu() 
{
  
	int choice;
	do {
		cout << "1-Christopher Langton’s Ant " << endl;
		cout << "2-Exit" << endl;
		cout << "Enter your selection : ";
		cin >> choice;

		if (cin.good()) {
			if ((choice != 1) && (choice != 2)) {
				cout << "\nERROR!! Invalid Input\n" << endl;
			}
			else {
				break;
			}
		}
		else {
			cout << "\nERROR!! Try again integers only.\n" << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}
	} while (1);
	return choice;

}
void innerMenu(int* rows, int* cols, int* steps, int* rowStart, int* colStart) {
	do {
		cout << "Enter the number of rows you want for the starting board size rows must be an integer greater than 1 : ";
		cin >> *rows;
		if (cin.good()) {
			if (*rows < 1) {
				cout << "\nERROR!! Invalid Input\n" << endl;
			}
			else {
				break;
			}
		}
		else {
			cout << "\nERROR!! Try again integers only.\n" << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}
	} while (1);

	do {
		cout << "Enter the number of rows you want for the starting board size columns must be an integer greater than 1 : ";
		cin >> *cols;

		if (cin.good()) {
			if (*cols < 1) {
				cout << "\nERROR!! Invalid Input\n" << endl;
			}
			else {
				break;
			}
		}
		else {
			cout << "\nERROR!! Try again integers only.\n" << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}
	} while (1);

	do {
		cout << "Enter the number of steps that you want the ant to take : ";
		cin >> *steps;
		if (cin.good()) {
			if (*steps < 1) {
				cout << "\nERROR!! Invalid Input\n" << endl;
			}
			else {
				break;
			}
		}
		else {

			cout << "\nERROR!! Try again integers only.\n" << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}
	} while (1);

	do {
		cout << "Enter the row number in which you would like the ant to start at : ";
		cin >> *rowStart;
		if (cin.good()) {
			if (*rowStart < 1) {
				cout << "\nERROR!! Invalid Input\n" << endl;
			}
			else {
				break;
			}
		}
		else {

			cout << "\nERROR!! Try again integers only.\n" << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}
	} while (1);
	do {
		cout << "Enter the row number in which you would like the ant to start at : ";
		cin >> *colStart;
		if (cin.good()) {
			if (*colStart < 1) {
				cout << "\nERROR!! Invalid Input\n" << endl;
			}
			else {
				break;
			}
		}
		else {
			cout << "\nERROR!! Try again integers only.\n" << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}
	} while (1);
}