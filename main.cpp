// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	char interfaceChoice = 0;

	do {
		int storedBalance = 1000, interfaceWithdraw, interfaceDeposit, interfaceExit, withdrawAmount, depositAmount, userChoice;

		cout
			<< "What would you like to do?\n" << endl
			<< "(1) Withdraw" << endl
			<< "(2) Deposit" << endl
			<< "(3) Check Balance" << endl
			<< "(4) Exit\n" << endl
			<< "Enter Choice: ";
		cin >> interfaceChoice;

		switch (interfaceChoice) {
		case '1':
			cout
				<< "\nCurrent Balance: " << storedBalance << endl
				<< "\nEnter amount to withdraw: ";
			cin >> withdrawAmount;
			if (withdrawAmount > storedBalance) {
				cout
					<< "\nNot enough balance"
					<< "\n\nMake another transaction?\n(1) Yes\n(2) No"
					<< "\nEnter Choice: ";
				cin >> userChoice;
				system("cls");
				switch (userChoice) {
				case '1':
					interfaceChoice;
					break;

				case '2':
					return 0;
				}
			}
			else if (withdrawAmount <= storedBalance) {
				cout << "\nWithdrawn Amount: " << withdrawAmount << endl;
					storedBalance = storedBalance - withdrawAmount;
				cout
					<< "\nUpdated Balance: " << storedBalance
					<< "\n\nMake another transaction?\n(1) Yes\n(2) No"
					<< "\n\nEnter Choice: ";
				cin >> userChoice;
				system("cls");
				if (userChoice == 2){
					return 0;
				}
			}

		case '2':
			cout
				<< "\nCurrent Balance: " << storedBalance << endl
				<< "\nEnter amount to deposit: ";
			cin >> depositAmount;
			storedBalance = depositAmount + storedBalance;
			cout << "\nUpdated Balance: " << storedBalance
				<< "\nMake another transaction?\n(1) Yes\n(2) No"
				<< "\nEnter Choice: ";
			cin >> userChoice;
			system("cls");
			switch (userChoice) {
			case '1':
				int main();
				break;

			case '2':
				return 0;
			}
			break;

		case '3':
			cout
				<< "\nCurrent Balance: " << storedBalance << endl
				<< "\nMake another transaction?\n(1) Yes\n(2) No"
				<< "\n\nEnter Choice: ";
			cin >> userChoice;
			system("cls");
			switch (userChoice) {
			case '1':
				;
				break;

			case '2':
				return 0;
			}

			break;

		case '4':
			return 0;

		default:
			cout << "Invalid choice";
		}
	} while (interfaceChoice == 0);

	return 0;
}


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
