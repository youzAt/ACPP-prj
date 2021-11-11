#ifndef ELECTRICIAN_HPP
#define ELECTRICIAN_HPP
#include<string>

class electrician
{
public:
	enum electrician_level
	{
		Beginer,
		Intermediate,
		professional
	};

	electrician(std::string, int, int);
	void set_name(std::string);
	std::string get_name() const;

	void set_age(int age);
	int get_age() const;

	void set_level(int);
	electrician_level get_level() const;

	void print_info() const;

private:
	std::string name;
	int age;
	electrician_level level;
};


#endif
