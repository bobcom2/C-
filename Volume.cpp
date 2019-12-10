#include <cmath>
#include <iostream>
using namespace std;

double cylvol(double, double); // the function prototype
int outputvol(double radius, double Length, double volume);
int main()
{
	double num, num2;
	cout << "Enter your radius" << endl;
	cin >> num;
	cout << "Enter your length" << endl;
	cin >> num2;
	cout << "The volume of a cylinder is  " << cylvol(num, num2) << endl;

	system("PAUSE");
	return 0;

}
double cylvol(double radius, double Length)
{
	double volume = 3.1416 * pow(radius, 2) * Length;
	cout << outputvol(radius, Length, volume);
	return volume;
}
int outputvol(double radius, double Length, double volume)
{
	cout << "Your Radius is: " << radius << endl;
	cout << "Your length is: " << Length << endl;
	cout << "Your Volume is: " << volume << endl;
	return volume;
}