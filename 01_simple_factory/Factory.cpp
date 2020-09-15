#include "Factory.h"
#include "ProductA.h"
#include "ProductB.h"

CProduct * Factory::createInstance(int type)
{
	switch (type)
	{
	case 0:
		return new ProductA();
	case 1:
		return new ProductB();
	default:
		break;
	}
}
