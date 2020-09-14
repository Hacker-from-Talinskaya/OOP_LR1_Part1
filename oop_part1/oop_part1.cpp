#include <iostream>
#include "Ingridient.h"
#include <cassert>

using namespace std;

int main()
{
	Ingridient ingridient_one("apple", "kilogramm", 1.1);
	assert(ingridient_one.get_name() == "apple");
	assert(ingridient_one.get_system_calculation() == "kilogramm");
	assert(ingridient_one.get_quanity() == 1.1f);

	cout << "Done" << endl;
}

