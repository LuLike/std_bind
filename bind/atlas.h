#pragma once

class Atlas
{
public:
	Atlas(int x_) : x(x_)
	{
		
	}
	void add(int a, int b)
	{
		std::cout << a + b << std::endl;
	}

	static void addStatic(int a, int b)
	{
		std::cout << a + b << std::endl;
	}

private:
	int x;
};