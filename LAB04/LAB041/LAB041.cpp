#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "----------for----------" << "\n";

	int i = 0;
	for (i = 1;
		i <=10;
		i++){
		cout << i << endl;
	}


	cout << "--------WHILE--------" << "\n";
	i = 1;

	while (i <= 10)
	{
		cout << i << endl;
		i++;

	}
	cout << "--------DO_WHILE--------" << "\n";

	i = 1;

	do {
		cout << (i) << "\n";
		i++;
		

	} while (i <= 10);




	return 0;

}
