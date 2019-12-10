/* Arabian Legend.cpp : This file contains the 'main' function. Program execution begins and ends there.
	Name: Alexander Perlaza
	Course: CIS-165
	Program name:Arabian legend
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
int count = 0;
double total = 0.01;

int main()
{
	int count = 0;
	cout << "Day		Amount owed" << endl;
	while (count <= 64)
	{
		total = total * 2;
		count = count + 1;
		cout << count << "			" << total << fixed << setprecision(2) << right << endl;
	}

}
