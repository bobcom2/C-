#include <iostream>

float length, width, area;

using namespace std;
float calcarea(float length, float width);
void output(float length, float width, float area);
int main(void)
{
	float length{}, width{}, area{};
	area = calcarea(length, width);
	output(length, width, area);
	return 0;
}
float calcarea(float length, float width)
{
	cout << "what are your sides?" << endl;
	cin >> length;
	cin >> width;
	float area = length * width;
	return area;
}
void output(float length, float width, float area)
{
	cout << "Your length is: " << length << endl;
	cout << "Your width is: " << width << endl;
	cout << "your area is: " << area;
	return;
}
float righttriangle()
{
	float a;
	cin >> a;
}