#include <iostream>
using namespace std;
int main()
{
	double grade1{}; // declare grade1 as a double variable
	double grade2{}; // declare grade2 as a double variable
	double grade3{}; // declare grade3 as a double variable
	double total;  // declare total as a double variable
	double average; // declare average as a double variable

	cout << grade1;
	cout << "what are the grades? ";
	cin >> grade1;
	cout << grade2;
	cin >> grade2;
	cout << grade3;
	cin >> grade3;
	total = grade1 + grade2 + grade3;
	average = total / 3.0; // divide the total by 3.0 cout << “The average grade is “ << average << endl;
	cout << average;
	return 0;
}