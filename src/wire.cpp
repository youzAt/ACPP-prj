#include "wire.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

// wire class constructor definition (also calls tool class constructor)
wire::wire(float length, int diameter, int type, float wirePrice) : tool(wirePrice)
{
	set_diameter(diameter); // set wire diameter
	set_length(length);	// set wire length
	set_type(type);		// set wire type
}

// wire class set_length function definition
void wire::set_length(float wireLength)
{
	if (wireLength > 0) // set and validation wire length
	{
		length = wireLength;
	}
	else
	{
		// error for invalid wire length
		throw out_of_range("the wire length should be greater than 0!!!");
	}
}

// wire class get_length function definition
float wire::get_length() const
{
	return length; // return wire length
}

// wire class set_diameter function definition
void wire::set_diameter(int wireDiameter)
{
	if (wireDiameter > 0) // set and validation wire diameter
	{
		diameter = wireDiameter;
	}
	else
	{
		// error for invalid wire diameter
		throw out_of_range("the wire diameter should be greater than 0!!!");
	}
}

// wire class get_diameter function definition
int wire::get_diameter() const
{
	return diameter; // return wire diameter
}

// wire class set_type function definition
void wire::set_type(int wireType)
{
	switch (wireType) // set wire type based on wireType number
	{
	case 1: // low voltage wire
		type = wire_type::Low_voltage;
		break;
	case 2: // high voltage wire
		type = wire_type::High_voltage;
		break;
	default: // error for invalid wire type number
		throw invalid_argument("invalid number for wire type!!!");
		break;
	}
}

// wire class get_type function definition
wire::wire_type wire::get_type() const
{
	return type; // return wire type
}

// wire class print_info function definition
void wire::print_info() const
{
	// print wire information
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