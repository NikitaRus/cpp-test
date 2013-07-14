#include <iostream>

using namespace std;

int main()
{
	char string[256];

	cout << "Introduce una oracion: ";
	cin.getline(string, 256, '\n');
	cout << "Tu oracion fue: " << string << endl;
	cin.get();

	return 0;
}
