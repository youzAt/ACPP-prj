#include <iostream>
#include <iomanip>
#include "lamp.hpp"
using namespace std;

lamp::lamp(int lampType, int lampColor, float lampPrice) : tool(lampPrice)
{
	set_type(lampType);
	set_color(lampColor);
}

void lamp::set_type(int lampType)
{
	switch (lampType)
	{
	case 1:
		type = lamp_type::Incandescent;
		break;
	case 2:
		type = lamp_type::LED;
		break;

	default:
		cout << "invalid number for lamp type!!!" << endl;
		break;
	}
}

void lamp::set_color(int lampColor)
{
	switch (lampColor)
	{
	case 1:
		color = lamp_color::White;
		break;
	case 2:
		color = lamp_color::Yellow;
		break;

	default:
		cout << "invalid number for lamp color!!!" << endl;
		break;
	}
}

lamp::lamp_type lamp::get_type() const
{
	return type;
}

lamp::lamp_color lamp::get_color() const
{
	return color;
}

void lamp::print_info() const
{
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