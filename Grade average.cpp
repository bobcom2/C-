#include <iostream>
using namespace std;
int main()
{
	double grade1; // declare grade1 as a double variable
	double grade2; // declare grade2 as a double variable
	double grade3; // declare grade2 as a double variable

	cout << "\nWhat are the grades? ";
	cin >> grade1;
	cin >> grade2;
	cin >> grade3;

	cout << "\nThe three grades are: " << endl;
	cout << "Grade1 = " << grade1 << endl;
	cout << "Grade2 = " << grade2 << endl;
	cout << "Grade3 = " << grade3 << endl;

	if (grade1 > grade2 && grade1 > grade3)
		cout << grade1;
	else if (grade2 > grade3)
		cout << grade2;
	else cout << grade3;
	return 0;
}