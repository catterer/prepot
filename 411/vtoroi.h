#ifndef VTOROI_H
#define VTOROI_H
#include "cl_base.h"
class vtoroi : public cl_base {
public:
	// vtoroi(std::string name, cl_base* p_predok = 0) : cl_base(name, p_predok) {};
	// вместо этого проще написать:
	using cl_base::cl_base; // типа используй конструктор базового
};
#endif
