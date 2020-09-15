#include "Factory.h"
#include "Product.h"

int main()
{
	Factory f;
	CProduct * a = f.createInstance(0);
	CProduct * b = f.createInstance(1);

	a->declare();
	b->declare();

	delete a, b;

	return 0;
}