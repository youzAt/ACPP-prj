#include <iostream>
#include"electrician.hpp"
#include"wire.hpp"
#include"lamp.hpp"
using namespace std;

int main()
{
	

	wire b(12.5, 1, 2, 20.99);
	b.print_info();
	
	return 0;
}
