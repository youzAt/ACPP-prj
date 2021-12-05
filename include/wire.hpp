#ifndef WIRE_HPP
#define WIRE_HPP
#include"tool.hpp"
class wire : public tool
{
public:
	enum wire_type
	{
		Low_voltage = 1,
		High_voltage
	};

	wire(float, int, int, float);
	virtual void print_info() const override;

	void set_length(float);
	float get_length() const;

	void set_diameter(int);
	int get_diameter() const;

	void set_type(int);
	wire_type get_type() const;

	
private:
	float length;
	int diameter;
	wire_type type;
};

#endif // WIRE_HPP
