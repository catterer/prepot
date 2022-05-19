#ifndef CL_APPLICATION_H
#define CL_APPLICATION_H
#include "cl_base.h"

class cl_app : public cl_base
{

	cl_base* p_predok;
	cl_base* p_spinogriz = new cl_base();
	cl_base* p_koren;
public:
	cl_app(cl_base* x);
	void derevo();
	int nafig();
};
#endif