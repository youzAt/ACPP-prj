#include <iostream>
#include "tool.hpp"
using namespace std;

// tool class constructor definition
tool::tool(float toolPrice)
{
	set_price(toolPrice); //set tool price
}

// tool class set_price function definition
void tool::set_price(float toolPrice)
{
	if (toolPrice <= 0) // validation and set tool price
	{
		cout << "The tool price should be greater than 00.00$" << endl;
	}
	else
	{
		price = toolPrice;
	}
}

// tool class get_price function definition
float tool::get_price() const
{
	return price; //return tool price
}

// tool class use_tool function definition
void tool::use_tool()
{
	if (durability == 0) // validation and decrease tool duarability
	{
		cout << "The tool needs to get fixed first" << endl;
	}
	else
	{
		durability--;
	}
}

// tool class fix_tool function definition
void tool::fix_tool()
{
	if (durability == 200) // validation and set durabiliy to 200
	{
		cout << "the tool is already fixed!!!" << endl;
	}
	else
	{
		durability == 200;
		cout << "the tool fixed successfully" << endl;
	}
}

// tool class get_durability function definition
int tool::get_durability() const
{
	return durability; //return tool durability
}


//*********overloading operators************
float tool::operator+(const tool &sec) const
{
	return this->get_price() + sec.get_price();
}
float tool::operator+(const float &sec) const
{
	return this->get_price() + sec;
}
float tool::operator-(const tool &sec) const
{
	return this->get_price() - sec.get_price();
}
float tool::operator-(const float &sec) const
{
	return this->get_price() - sec;
}
