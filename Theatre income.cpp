/* Theathre income.cpp : This file contains the 'main' function. Program execution begins and ends there.
	Name: Alexander Perlaza
	Course: CIS-165
	Program name:Theatre income
	Descrription: Write a program that asks how many tickets were sold for both the
	orchestra and balcony, and then calculates and displays the amount of income
	generated from the ticket sales.
	*/

#include <iostream>
#include <iomanip>

const float Orchestra = 50.00; //Orchestra cost per seats
const float Balcony = 30.00; //Balcony cost per seats

using namespace std;

float main()
{
	//input variables
	int Orchestra_seats;
	int Balcony_seats;
	//processing section

	cout << "how many Orchestra seats were sold? ";
	cin >> Orchestra_seats;
	cout << "how many Balcony seats were sold? ";
	cin >> Balcony_seats;
	float Orch_income = Orchestra * Orchestra_seats;
	float Balcony_income = Orchestra * Balcony_seats;
	float Total_income = Orch_income + Balcony_income;

	//output section
	cout << setw(24) << setiosflags(ios::fixed) << setprecision(2);
	cout << "\n\t\t******************" << endl;
	cout << "\t\t* Theatre Income *" << endl;
	cout << "\t\t******************" << endl;
	cout << "\nSeat Type	Cost/Seat	# sold	\tIncome" << endl;
	cout << "Orchestra	" << "$" << Orchestra << "\t	" << Orchestra_seats << "	\t$" << Orch_income << endl;
	cout << "Balcony	" << "\t$" << Balcony << "\t	" << Balcony_seats << "	\t$" << Balcony_income << endl;
	cout << "\t\t\t			-----" << endl;
	cout << "\t\t\t			$" << Total_income;
}