#include "Ingridient.h"

using namespace std;

Ingridient::Ingridient(string name, string system_calculation, float quanity) {
	this->name = name;
	this->system_calculation = system_calculation;
	this->quanity = quanity;
}

Ingridient::Ingridient(const Ingridient& i) {
	this->name = i.name;
	this->system_calculation = i.system_calculation;
	this->quanity = i.quanity;
}

Ingridient::Ingridient() {
	this->name = "";
	this->system_calculation = "";
	this->quanity = 0;
}

string Ingridient::get_name()
{
	return this->name;
}

string Ingridient::get_system_calculation()
{
	return this->system_calculation;
}

float Ingridient::get_quanity()
{
	return this->quanity;
}

