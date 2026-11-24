#include "Vector.h"
#include "error.h"

Vector::Vector(int s)
{
	if (s > MAX_SIZE) throw 1;
	size = s;
	beg = new int[s];
	for (int i = 0; i < size; i++)
		beg[i] = 0;
}

Vector::Vector(int s, int* mas)
{
	if (s > MAX_SIZE) throw 1;
	size = s;
	beg = new int[size];
	for (int i = 0; i < size; i++)
		beg[i] = mas[i];
}

Vector::Vector(const Vector& v)
{
	size = v.size;
	beg = new int[size];
	for (int i = 0; i < size; i++)
		beg[i] = v.beg[i];
}

Vector::~Vector()
{
	if (beg != 0) delete[]beg;
}

const Vector& Vector::operator=(const Vector& v)
{
	if (this == &v)return *this;
	if (beg != 0) delete[]beg;
	size = v.size;
	beg = new int[size];
	for (int i = 0; i < size; i++)
		beg[i] = v.beg[i];
	return *this;
}

int Vector::operator[](int i)
{
	if (i < 0) throw 2;
	if (i >= size)throw error("Vector length more than MAXSIZE\n");
	return beg[i];
}

Vector Vector::operator+(int a)
{
	Vector temp(size, beg);
	
	for(int i = 0; i < size; i++)
	{
		temp.beg[i] = this->beg[i] + a;
	}
	
	return temp;
}

Vector Vector::operator-(int b)
{
	if (size == 0) throw 5;
	if (size == b)
	{
		size = 0;
		delete[]beg;
		beg = 0;
		return *this;
	};
	if (b >= size)throw error("Vector length more than MAXSIZE\n");
	Vector temp(size-b, beg);
	
	
	for (int i = 0; i < size-b; i++)
		temp.beg[i] = beg[i];
	return temp;
}

ostream& operator<<(ostream& out, const Vector& v)
{
	if (v.size == 0) out << "Empty\n";
	else {
		for (int i = 0; i < v.size; i++)
			out << v.beg[i] << " ";
		out << endl;
	}
	return out;
}

istream& operator>>(istream& in, Vector& v)
{
	for (int i = 0; i < v.size; i++)
	{
		cout << ">";
		in >> v.beg[i];
	}
	return in;
}
