#include <iostream>
#include <iomanip>
#include "include/lamp.hpp"
using namespace std;

// lamp class constructor definition (also calls tool constructor)
lamp::lamp(int lampType, int lampColor, float lampPrice) : tool(lampPrice)
{
	set_type(lampType);   // set lamp type
	set_color(lampColor); // set lamp color
}

// lamp class set_type function definition
void lamp::set_type(int lampType)
{
	switch (lampType) // set lamp type based on lamType number
	{
	case 1: // Incandescent
		type = lamp_type::Incandescent;
		break;
	case 2: // LED
		type = lamp_type::LED;
		break;

	default: // error for invalid lamp type input
		throw invalid_argument("invalid number for lamp type!!!");
		break;
	}
}

// lamp class set_color function definition
void lamp::set_color(int lampColor)
{
	switch (lampColor) // set lamp color based on lampColor number
	{
	case 1: // white
		color = lamp_color::White;
		break;
	case 2: // yellow
		color = lamp_color::Yellow;
		break;

	default: // error for invalid lamp color input
		throw invalid_argument("invalid number for lamp color!!!");
		break;
	}
}

// lamp class get_type function definition
lamp::lamp_type lamp::get_type() const
{
	return type; // return lamp type
}

// lamp class get_color function definition
lamp::lamp_color lamp::get_color() const
{
	return color; // return lamp color
}

// lamp class print_info function definition
void lamp::print_info() const
{
	// print lamp information
	cout << "-------------------" << endl;
	cout << "LAMP INFO" << endl;
	switch (get_type())
	{
	case 1:
		cout << left << setw(15) << "type: "
		     << "Incandescent" << endl;

		break;
	case 2:
		cout << left << setw(15) << "type: "
		     << "LED" << endl;

		break;
	}
	switch (get_color())
	{
	case 1:
		cout << left << setw(15) << "color: "
		     << "White" << endl;

		break;
	case 2:
		cout << left << setw(15) << "color: "
		     << "Yellow" << endl;

		break;
	}
	cout << left << setw(15) << "price: "
	     << get_price() << "$" << endl;
	cout << left << setw(15) << "durability: "
	     << get_durability() << endl;
	cout << "-------------------" << endl;
}
