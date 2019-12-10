#include <iostream>
#include <string>

using namespace std;

int main()
{
	//input variables
	// Example 3
	double Fahrenheit;
	cout << "what is the tempeture(F)? ";
	cin >> Fahrenheit, cout << Fahrenheit << " °F" << endl;
	double Celcius = 5.0 / 9.0 * Fahrenheit - 32.0;
	//output
	cout << Celcius;
	cout << " °C";

	// input variables
	// example 4
	double miles{};
	double distance = (2 * miles);

	// input variables
	// example 5
	double total_distance{};
	double average{};
	double elapsed_time = total_distance / average;
}

#include <iostream>
using namespace std;
int main()
{
	//incorrect program ex. A
	width = 15
		area = length * width;
	cout << "The area is " << area
		// corrected ex. A
		int	width = 15;
	int length = X;
	int	area = length * width;
	cout << "The area is " << area;

	//incorrect program ex. B
	int length, width, area;
	area = length * width; length = 20;
	width = 15;
	cout << "The area is " << area;
	return 0;
	//correccted ex. B
	int length, width, area;
	width = 15;
	length = 20;
	area = length * width;
	cout << "The area is " << area;
	return 0;
}
//incorrect program ex. C
#include <iostream>

int main()
{
	int length = 20; width = 15, area; length* width = area;
	cout << "The area is ", area;

	return 0;
}

// correct ex. C
#include <iostream>

int main()
{
	int length = 20, width = 15, area;
	area = length * width;
	cout << "The area is ", area;

	return 0;
}