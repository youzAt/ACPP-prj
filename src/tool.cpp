#include <iostream>
#include "tool.hpp"
using namespace std;

tool::tool(float toolPrice)
{
	set_price(toolPrice);
}

void tool::set_price(float toolPrice)
{
	if (toolPrice <= 0)
	{
		cout << "The tool price should be greater than 00.00$" << endl; 
	}
	else
	{
		price = toolPrice;
	}
}
float tool::get_price() const
{
	return price;
}

void tool::use_tool()
{
	if (durability == 0)
	{
		cout << "The tool needs to get fixed first" << endl;
	}
	else
	{
		durability--;
	}
}
void tool::fix_tool()
{
	if (durability == 200)
	{
		cout << "the tool is already fixed!!!" << endl;
	}
	else
	{
		durability == 200;
		cout << "the tool fixed successfully" << endl;
	}
}

int tool::get_durability() const
{
	return durability;
}
