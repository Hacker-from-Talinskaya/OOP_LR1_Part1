#include "Ingridient.h"

using namespace std;

Ingridient::Ingridient(string name, string system_calculation, float quanity) {
	this->name = name;
    this->systemCalculation = system_calculation;
	this->quanity = quanity;
}

Ingridient::Ingridient(const Ingridient& i) {
	this->name = i.name;
    this->systemCalculation = i.systemCalculation;
	this->quanity = i.quanity;
}

Ingridient::Ingridient() {
	this->name = "";
    this->systemCalculation = "";
	this->quanity = 0;
}

string Ingridient::getName()
{
	return this->name;
}

string Ingridient::getSystemCalculation()
{
    return this->systemCalculation;
}

float Ingridient::getQuanity()
{
    return this->quanity;
}


