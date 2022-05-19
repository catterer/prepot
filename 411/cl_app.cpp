#include "cl_app.h"
#include "pervyi.h"
#include "vtoroi.h"
#include <iostream>
using namespace std;
cl_app::cl_app(cl_base* x) : cl_base(x){};
void cl_app::derevo(){
	string predok, spinogriz;
	cout << "Enter the Root name: ";
	cin >> predok;
	p_koren = new pervyi(predok);
	p_predok = p_koren;
	
	do{
		cin >> predok;
		cin >> spinogriz;
		if (predok==spinogriz){
			break;
		}
		if (predok == p_spinogriz -> get_name()){
			p_predok = p_spinogriz;
		}
		add_spinogriz(p_spinogriz);
	} while (true);
}
int cl_app::nafig()
{
	cout << "\n";
	cout << p_koren -> get_name();
	p_koren -> print_hierarchy();
	return 0;
}
	