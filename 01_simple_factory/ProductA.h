#pragma once
#include "Product.h"
#include <iostream>

class ProductA : public CProduct
{
public:
	//ProductA() {}
	virtual ~ProductA() {}

	virtual void declare() 
	{
		std::cout << __FUNCTION__ << std::endl;
	}
};