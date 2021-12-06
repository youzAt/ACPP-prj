#include <iostream>
#include <iomanip>
#include "electrician.hpp"
using namespace std;

//electrician class constructor definition
electrician::electrician(string name, int age, int level)
{
	set_name(name);	  // set electrician name
	set_age(age);	  // set electrician age
	set_level(level); // set electrician level
}

//electrician class setـname function definition
void electrician::set_name(string electrician_name)
{
	name = electrician_name; //set electrician name
}

//electrician class get_name function definition
string electrician::get_name() const
{
	return name; //returns electrician name
}

//electrician class set_age function definition
void electrician::set_age(int electrician_age)
{
	if (electrician_age >= 18 && electrician_age <= 80) // validation and set electrician age
	{
		age = electrician_age;
	}
	else
	{
		cout << "electrician must be in range of 18-80 !!!" << endl; //error for invalid age
	}
}

//electrician class get_age function definition
int electrician::get_age() const
{
	return age; //return electrician age
}

//electrician class set_level function definition
void electrician::set_level(int levelN)
{
	switch (levelN) //validation and set electrician level based on input number
	{
	case 1: // beginner
		level = electrician_level::Beginer;
		break;
	case 2: // Intermediate
		level = electrician_level::Intermediate;
		break;
	case 3: // professional
		level = electrician_level::professional;
		break;

	default: // error for invalid level input
		cout << "invalid number for electrician level!!!" << endl;
		break;
	}
}

//electrician class get_level function definition
electrician::electrician_level electrician::get_level() const
{
	return level; //return electrician level
}

//electrician class print_info function definition
void electrician::print_info() const
{
	// print electrician information
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