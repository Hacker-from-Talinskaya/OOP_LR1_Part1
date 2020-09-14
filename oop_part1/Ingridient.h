#pragma once
#include <iostream>

using namespace std;

class Ingridient
{
public :
	Ingridient(string name, string system_calculation, float quanity);
	Ingridient(const Ingridient& i);
	Ingridient();

	string get_name();
	string get_system_calculation();
	float get_quanity();
	
private :
	string name;
	string system_calculation;
	float quanity;
};

