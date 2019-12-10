/* Prog3.cpp : This file contains the 'main' function. Program execution begins and ends there.
	Name: Alexander Perlaza
	Course: CIS-165
	Program name: Family costs
	Description: To write and execute a program that will analyze a family's data.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//local declarations
	int FamilyID, household_size;
	float income, debt, monthly_payments, service_fee, living_expense;
	const float service_fee1 = 0.01, service_fee2 = 0.02, living_expense1 = 4500.50, living_expense2 = 4700.30, living_expense3 = 5000.00;

	//processing section
	cout << "\nWhat is the ID? ";
	cin >> FamilyID;
	cout << "The Family Size is: ";
	cin >> household_size;
	cout << "The Family income is: $";
	cin >> income;
	cout << "The Family debt is: $";
	cin >> debt;

	if (household_size > 4) {
		living_expense = living_expense1 * household_size;
		cout << "\nYour estimated living expenses are $" << living_expense;
	}

	else if (household_size == 4) {
		living_expense = living_expense2 * household_size;
		cout << "\nYour estimated living expenses are $" << living_expense;
	}
	else if (household_size < 4) {
		living_expense = living_expense3 * household_size;
		cout << "\nYour estimated living expenses are $" << living_expense;
	}
	if (debt > 4000) {
		cout << "\nYou will pay off the debt in one year." << endl;
		monthly_payments = debt / 12;
	}
	else if (debt <= 4000) {
		cout << "\nYou will pay off the debt in two years." << endl;
		monthly_payments = debt / 24;
	}
	float savings = household_size * 0.02 * (income - debt);
	cout << "\nYour Family should save: $" << savings << endl;
	if (income <= 30000) {
		service_fee = income * service_fee1;
		cout << "Your Service fee: $" << service_fee;
	}
	else if (income > 30000) {
		service_fee = income * service_fee2;
		cout << "Your Service fee is: $" << service_fee;
	}
	cout << "\n\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	cout << "   Family Budget Assistance Center" << endl;
	cout << "         November 2019" << endl;
	cout << "   Telephone: (800) 555-1234" << endl;
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	cout << setprecision(2) << setiosflags(ios::fixed);
	cout.setf(ios::right);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "\n Identification Number		" << setw(7) << FamilyID << endl;
	cout << " Family Size			" << setw(7) << household_size << endl;
	cout << " Annual income			$" << setw(9) << income << endl;
	cout << " Total Debt			$" << setw(9) << debt << endl;
	cout << " Expected living expenses	$" << setw(9) << living_expense << endl;
	cout << " Monthly Payment		$" << setw(9) << monthly_payments << setiosflags(ios::right) << endl;
	cout << " Savings			$" << setw(9) << savings << setiosflags(ios::right);
}