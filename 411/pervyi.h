#ifndef PERVYI_H
#define PERVYI_H
#include "cl_base.h"
#include <iostream>

class pervyi : public cl_base {
public:
	pervyi(std::string name, cl_base* p_predok = 0) : cl_base(name, p_predok) {};

};
#endif