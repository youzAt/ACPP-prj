#include <iostream>
#include"electrician.hpp"
#include"wire.hpp"
using namespace std;

int main()
{
	electrician a("masoud", 25, 2);
	a.print_info();

	wire b(25.2, 5);
	b.print_info();
	
	return 0;
}
