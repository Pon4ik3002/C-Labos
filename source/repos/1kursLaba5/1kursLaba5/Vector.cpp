#include "Vector.h"


Vector::Vector(void)
{
	beg = 0;
	size = 0;
	cur = 0;
}

Vector::Vector(int I)
{
	beg = new Object1 * [I];
	cur = 0;
	size = I;
}

Vector::~Vector(void)
{
	if (beg != 0)delete[] beg;
	beg = 0;
}

void Vector::Add(Object1* p)
{
	if (cur < size) {
		beg[cur] = p;
		cur++;
	}
}

ostream& operator <<(ostream& out, const Vector&v)
{
	if (v.size == 0) out << "Empty" << endl;
	Object1** p = v.beg;
	for (int i = 0; i < v.cur; i++)
	{
		(*p)->Show();
		p++;
	}
	return out;
}
