#pragma once
#include "Product.h"
#include <iostream>

class ProductB : public CProduct
{
public:
	//ProductB() {}
	virtual ~ProductB() {}

	virtual void declare()
	{
		std::cout << __FUNCTION__ << std::endl;
	}
};
