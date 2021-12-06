#ifndef ELECTRICIAN_HPP
#define ELECTRICIAN_HPP
#include <string>

class electrician // electrician class
{
public:
	enum electrician_level // enum for electrician level
	{
		Beginer = 1,
		Intermediate,
		professional
	};

	electrician(std::string, int, int); // constructor that gets name, age, and a number for electrician level

	void set_name(std::string);	  // function that gets a string and sets it for electrician name
	std::string get_name() const; // function that returns electricain name

	void set_age(int age); // function that gets a number and after validation sets it for electrician age
	int get_age() const;   //function that returns electrician age

	void set_level(int);				 // function that gets a number and sets electrician level based on that (1:Beginer, 2:Intermediate, 3:professional)
	electrician_level get_level() const; // function that returns electrician level

	void print_info() const; // function that prints electrician information

private:
	std::string name;		 // electrician name
	int age;				 // electrician age
	electrician_level level; // electrician level
};

#endif
