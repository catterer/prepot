#include "cl_base.h"
#include <iostream>

cl_base::cl_base(cl_base* p_predok)
{
	this->set_predok(p_predok);
}
cl_base::cl_base(std::string ob_name, cl_base* p_predok)
{
	this->set_predok(p_predok);
	this->set_name(ob_name);
}
void cl_base::set_name(std::string ob_name)
{
	if (ob_name != "")
		this->ob_name = ob_name;
	else
		this->ob_name = "cl_base";
}
std::string cl_base::get_name()
{
	return this->ob_name;
}
void cl_base::set_predok(cl_base* p_predok)
{
	if (p_predok)
	{
		this->p_predok = p_predok;
		this->p_predok -> add_spinogriz(this);
	}
	else this->p_predok = 0;
}
void cl_base::add_spinogriz(cl_base* spinogriz)
{
	spinogrizi.push_back(spinogriz);
}
void cl_base::print_hierarchy()
{
	if (spinogrizi.size() == 0) {
		return;
	}
	std::cout << "\n" << this->ob_name;
	this->it_spinogriz = this->spinogrizi.begin();
	while (this->it_spinogriz != this->spinogrizi.end())
	{
		std::cout << " " << (*it_spinogriz)->get_name();
		this->it_spinogriz++;
	}
	this->it_spinogriz--;
	(*it_spinogriz)->print_hierarchy();
}

