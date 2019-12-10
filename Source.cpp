/* Arabian Legend.cpp : This file contains the 'main' function. Program execution begins and ends there.
	Name: Alexander Perlaza
	Course: CIS-165
	Program name:Arabian legend
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int count = 0;
double money = 0.01, total = money * 2.0;
int main(count)
{
	cout << "Day		Amount Owed" << endl;
	while (count <= 64)
	{
		cout << count << "			" << total << endl;
		total = money * 2;
		count = count + 1;
	}
}