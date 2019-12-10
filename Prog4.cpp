/* Prog4.cpp : This file contains the 'main' function. Program execution begins and ends there.
	Name: Alexander Perlaza
	Course: CIS-165
	Program name: Bookends Book Store
	Descrription: A C++ program that accepts this data for each book then displays the input information and an updated book inventory balance.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int Report();
int Processing_Calculation();
int messages();
int ID, Inventory_Start, Books_received, Books_sold, New_Balance;
string message;
const string date = "January";
int Processing_Calculation(int Inventory_Start, int Books_received, int Books_sold, int New_Balance)
{
	New_Balance = (Inventory_Start + Books_received) - Books_sold;
	return New_Balance;
}
string messages(int New_Balance, string message, int Inventory_Start, int Books_received, int Books_sold)
{
	Processing_Calculation(Inventory_Start, Books_received, Books_sold, New_Balance);
	cout << New_Balance;
	if (New_Balance < 0)
		message = "Negative Balance";

	else if (New_Balance < 50)
		message = "Low Inventory";

	else (New_Balance >= 50),
		message = "Inventory OK";
	return message;
}
int Report(int ID, int Inventory_Start, int Books_received, int Books_sold, int New_Balance)
{
	cout << "\n			BOOKENDS BOOK STORE				";
	cout << "\n\n			 " << date << " 2019				";
	cout << "\n\n  ID		Inventory	 Number	     Number	  New		";
	cout << "\n Number		 Start		Received      sold	balance		message" << endl;
	cout << " " << ID << "		 " << Inventory_Start << "		" << Books_received << "	      " << Books_sold << "		";
	cout << Processing_Calculation(Inventory_Start, Books_received, Books_sold, New_Balance) << "		" << messages(New_Balance, message, Inventory_Start, Books_received, Books_sold) << endl;
	return 0;
}
int main()
{
	cout << "What is the book's ID? ";
	cin >> ID;
	cout << "Inventory balance at the beginning of the month: ";
	cin >> Inventory_Start;
	cout << "Number of Copies received during the month: ";
	cin >> Books_received;
	cout << "Number of Copies sold during the month: ";
	cin >> Books_sold;
	Report(ID, Inventory_Start, Books_received, Books_sold, New_Balance);
	Processing_Calculation(Inventory_Start, Books_received, Books_sold, New_Balance);
	return 0;
}

