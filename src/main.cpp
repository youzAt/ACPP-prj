#include <iostream>
#include <vector>
#include "electrician.hpp"
#include "wire.hpp"
#include "lamp.hpp"
#include "tool.hpp"
using namespace std;

int main()
{
	vector<tool *> tools; // tools vector

	try
	{
		tools.push_back(new wire(12.2, 1, 2, 20.5));
	}
	catch (const exception &e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		tools.push_back(new lamp(1, 2, 15));
	}
	catch (const exception &e)
	{
		cerr << e.what() << endl;
	}
	tools[0]->print_info();
	tools[1]->print_info();

	cout << (*tools[0]) + (*tools[1]) << endl;
	cout << *tools[0] + 20 << endl;
	cout << *tools[1] - 5 << endl;

	return 0;
} // end of phase #2
