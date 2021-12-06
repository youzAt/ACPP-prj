#ifndef TOOL_HPP
#define TOOL_HPP

class tool // tool father class
{
public:
	tool(float);						 // constructor that gets a float number for tool price
	virtual void print_info() const = 0; // virtual abstract function that prints tool info and needs to be written in child classes

	void set_price(float);	 // function that gets a float number anf after validation sets it for tool price
	float get_price() const; // function that returns tool price

	void use_tool(); // function that after validation decrease durability (useing the tool)
	void fix_tool(); // function that after validation set durability to 200 (fixing the tool)

	int get_durability() const; // function that returns tool durability

	float operator+(const tool &) const;  // overload + operator to sum tools prices
	float operator+(const float &) const; // overload + operator to sum tool price with a number
	float operator-(const tool &) const;  // overload - operator to subtract tools prices
	float operator-(const float &) const; // overload - operator to subtract a number from tool price

private:
	float price = 00.00;  // tool price
	int durability = 200; // tool durability with 200 default
};

#endif // TOOL_HPP
