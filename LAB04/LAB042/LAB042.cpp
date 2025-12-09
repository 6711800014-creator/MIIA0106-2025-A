#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "----------For Count Even Number 2 to 20 ----------" << "\n";

	int i = 0;
	for (i = 2;
		i <= 20;
		i++) {
		if (i % 2 == 1) {
			continue;
			
		}
		cout << "i:" << i << endl;

	


	}
return 0;







}