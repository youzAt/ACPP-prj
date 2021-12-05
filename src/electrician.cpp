#include <iostream>
#include <iomanip>
#include "electrician.hpp"
using namespace std;

electrician::electrician(string name, int age, int level)
{
	set_name(name);
	set_age(age);
	set_level(level);
}

void electrician::set_name(string electrician_name)
{
	name = electrician_name;
}

string electrician::get_name() const
{
	return name;
}

void electrician::set_age(int electrician_age)
{
	if (electrician_age >= 18)
	{
		age = electrician_age;
	}
	else
	{
		cout << "electrician must be over 18!!!" << endl;
	}
}

int electrician::get_age() const
{
	return age;
}

void electrician::set_level(int levelN)
{
	switch (levelN)
	{
	case 1:
		level = electrician_level::Beginer;
		break;
	case 2:
		level = electrician_level::Intermediate;
		break;
	case 3:
		level = electrician_level::professional;
		break;

	default:
		cout << "invalid number for electrician level!!!" << endl;
		break;
	}
}

electrician::electrician_level electrician::get_level() const
{
	return level;
}

void electrician::print_info() const
{
	cout << "-------------------" << endl;
	cout << "ELECTRICIAN INFO" << endl;
	cout << left << setw(15) << "name: " << get_name() << endl;
	cout << left << setw(15) << "age: " << get_age() << endl;
	switch (get_level())
	{
	case 1:
		cout << left << setw(15) << "level: "
			 << "Beginner" << endl;

		break;
	case 2:
		cout << left << setw(15) << "level: "
			 << "Intermediat" << endl;

		break;
	case 3:
		cout << left << setw(15) << "level: "
			 << "Professional" << endl;

		break;
	}
	cout << "------------------" << endl;
}