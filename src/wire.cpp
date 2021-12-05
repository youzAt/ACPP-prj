#include "wire.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

wire::wire(float length, int diameter, int type, float wirePrice) : tool(wirePrice)
{
	set_diameter(diameter);
	set_length(length);
	set_type(type);
}

void wire::set_length(float wireLength)
{
	if (wireLength > 0)
	{
		length = wireLength;
	}
	else
	{
		cout << "invalid length!!!" << endl;
	}
}
float wire::get_length() const
{
	return length;
}

void wire::set_diameter(int wireDiameter)
{
	if (wireDiameter > 0)
	{
		diameter = wireDiameter;
	}
	else
	{
		cout << "invalid wire diameter!!!" << endl;
	}
}
int wire::get_diameter() const
{
	return diameter;
}

void wire::set_type(int wireType)
{
	switch (wireType)
	{
	case 1:
		type = wire_type::Low_voltage;
		break;
	case 2:
		type = wire_type::High_voltage;
		break;
	default:
		cout << "invalid number for wire type!!!" << endl;
		break;
	}
}

wire::wire_type wire::get_type() const
{
	return type;
}

void wire::print_info() const
{
	cout << "-------------------" << endl;
	cout << "WIRE INFO" << endl;
	cout << left << setw(15) << "length: " << get_length() << "m" << endl;
	cout << left << setw(15) << "diametr: " << get_diameter() << "mm" << endl;
	switch (get_type())
	{
	case 1:
		cout << left << setw(15) << "type: "
			 << "for low voltage" << endl;

		break;
	case 2:
		cout << left << setw(15) << "type: "
			 << "for hight voltage" << endl;

		break;
	
	}
	cout << left << setw(15) << "price: "
			 << get_price() << "$" << endl;
	cout << left << setw(15) << "durability: "
			 << get_durability() << endl;
	cout << "-------------------" << endl;
}