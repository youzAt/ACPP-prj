#ifndef LAMP_HPP
#define LAMP_HPP
#include "tool.hpp"

class lamp : public tool // lamp class that inherited from an abstract class of tool
{
public:
	enum lamp_type // enum for lamp type
	{
		Incandescent = 1,
		LED
	};
	enum lamp_color //enum for lamp color
	{
		White = 1,
		Yellow
	};
	lamp(int, int, float);					  // lamp class constructor that gets numbers for lamp type and color, and a float number for lamp price
	virtual void print_info() const override; // virtual overrided function that prints lamp infornation

	void set_type(int);	 // function that gets a number and sets lamp type based on that (1:Incandescent, 2:LED)
	void set_color(int); // function that gets a number and sets lamp color based on that (1:white, 2:yellow)

	lamp_type get_type() const;	  // function that returns lamp type
	lamp_color get_color() const; // function that returns lamp color

private:
	lamp_type type;	  // lamp type
	lamp_color color; // lamp color
};

#endif // LAMP_HPP
