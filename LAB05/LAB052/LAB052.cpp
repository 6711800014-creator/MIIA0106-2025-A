#include <iostream>
#include <string>
#include <cmath>

	
using namespace std; // เขียนฟังก์ชัน maxOfThree(a,b,d) เพื่อหาค่ามากที่สุดจากตัวเลข 3 ตัว

int maxOfThree(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}	

int main()
{
	int a, b, c;
	cout << "Enter three numbers: ";
	cin >> a;
	cout << "Enter three numbers: ";
	cin >> b;
	cout << "Enter three numbers: ";
	cin >> c;

	int max = 0;
	max= maxOfThree(a, b, c);
	cout << "The maximum number is: " << max << endl;

	return 0;
}
