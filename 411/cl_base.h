#ifndef CL_BASE_H
#define CL_BASE_H
#include <string>
#include <vector>

class cl_base {
	std::string ob_name;
	cl_base* p_predok;
public:
	cl_base(cl_base* p_predok = 0);
	cl_base(std::string, cl_base* p_predok = 0);

	void set_name(std::string);
	std::string get_name();
	void set_predok(cl_base*);
	void add_spinogriz(cl_base*);
	void print_hierarchy();

	std::vector<cl_base*> spinogrizi;
	std::vector<cl_base*> ::iterator it_spinogriz;
};
#endif

