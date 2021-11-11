#ifndef WIRE_HPP
#define WIRE_HPP

class wire
{
public:
	enum wire_type
	{
		Low_voltage,
		High_voltage
	};

	wire(float, int, int = 1);

	void set_length(float);
	float get_length() const;

	void set_diameter(int);
	int get_diameter() const;

	void set_type(int);
	wire_type get_type() const;

	void print_info() const;
	
private:
	float length;
	int diameter;
	wire_type type;
};

#endif // WIRE_HPP
