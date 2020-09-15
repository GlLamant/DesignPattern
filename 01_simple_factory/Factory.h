#pragma once
#include "Product.h"

class Factory
{
public:
	CProduct * createInstance(int type);
};