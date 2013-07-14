#include <iostream>
#include <new>

using namespace std;

int main()
{
	int signed * pais;

	pais = new int signed [-1]; // error: exception not expected

	if (pais) pais[0] = 10;

	delete [] pais;

	std::cout << "Is this part reached?" << std::endl;

	return 0;
}
