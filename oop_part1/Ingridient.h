#pragma once
#include <iostream>

using namespace std;

class Ingridient
{
public :
	Ingridient(string name, string system_calculation, float quanity);
	Ingridient(const Ingridient& i);
	Ingridient();

    string getName();
    string getSystemCalculation();
    float getQuanity();
private :
	string name;
    string systemCalculation;
	float quanity;
};

