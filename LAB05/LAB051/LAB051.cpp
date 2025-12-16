#include <iostream>
#include <string>

using namespace std;

double calculatecircle(double radius)
{
	const double PI = 3.14159;
	return PI * radius * radius;
}

double calculatesquare(double hight,double width)
{
	return hight * width;
	
}

void inputcircle()
{
	double radius;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	double area = calculatecircle(radius);
	cout << "The area of the circle is: " << area << endl;
}	

void inputsquare()
{
	double hight, width;
	cout << "Enter the hight of the square: ";
	cin >> hight;
	cout << "Enter the width of the square: ";
	cin >> width;
	double area = calculatesquare(hight, width);
	cout << "The area of the square is: " << area << endl;
}

int main()
{
	inputcircle();	
	inputsquare();	


	return 0;
}

