#ifndef WIRE_HPP
#define WIRE_HPP
#include "tool.hpp"
class wire : public tool // wire class that inherited from an abstract class of tool
{
public:
	enum wire_type // enum for wire type
	{
		Low_voltage = 1,
		High_voltage
	};

	wire(float, int, int, float);			  // wire class constructor that gets a float for wire length, two ints for diameter and type and a float for wire price
	virtual void print_info() const override; // virtual overrided function that prints wire infornation

	void set_length(float);	  // function that gets a float number and after validation sets it for length
	float get_length() const; // function that returns wire length

	void set_diameter(int);	  // function that gets a number and after validation sets it for diameter
	int get_diameter() const; // function that returns wire diameter

	void set_type(int);			// function that gets a number and sets wire type based on that (1:low voltage, 2:highvoltage)
	wire_type get_type() const; // function that returns wire type

private:
	float length;	// wire length
	int diameter;	// wire diameter
	wire_type type; // wire typr
};

#endif // WIRE_HPP
