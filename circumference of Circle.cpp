#include <iostream>

using namespace std;

int main()
{
	//declared variables
	double r{};
	cout << "please enter the radius: ";
	cin >> r;
	double pie = 3.1416;
	double circumference = r * pie * r;

	//output

	cout << circumference;
}