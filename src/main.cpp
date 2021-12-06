#include <iostream>
#include "electrician.hpp"
#include "wire.hpp"
#include "lamp.hpp"
using namespace std;

int main()
{
	tool *a = new wire(12.2, 1, 2, 20.5);
	tool *b = new lamp(1, 2, 15);

	a->print_info();
	b->print_info();

	cout << (*a) + (*b) << endl;
	cout << *a + 20 << endl;
	cout << *b - 5 << endl;

	return 0;
} //end of phase #2
