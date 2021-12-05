#ifndef TOOL_HPP
#define TOOL_HPP

class tool
{
public:
	tool(float);
	virtual void print_info() const = 0;

	void set_price(float);
	float get_price() const;

	void use_tool();
	void fix_tool();

	int get_durability() const;

private:
	float price = 00.00;
	int durability = 200;
};

#endif // TOOL_HPP
