#ifndef LAMP_HPP
#define LAMP_HPP
#include "tool.hpp"

class lamp : public tool
{
public:
	enum lamp_type
	{
		Incandescent = 1,
		LED
	};
	enum lamp_color
	{
		White = 1,
		Yellow
	};
	lamp(int, int, float);
	virtual void print_info() const override;

	void set_type(int);
	void set_color(int);

	lamp_type get_type() const;
	lamp_color get_color() const;


private:
	lamp_type type;
	lamp_color color;
};

#endif // LAMP_HPP
