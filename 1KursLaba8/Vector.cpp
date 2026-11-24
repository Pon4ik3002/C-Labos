#include "Vector.h"
#include "Persona.h"
#include "Student.h"
#include "Event.h"
#include <iostream>
using namespace std;

Vector::Vector(int I)
{
	beg = new Object * [I];
	cur = 0;
	size = I;
}

Vector::Vector(void)
{
	beg = new Object * [10];
	cur = 0;
	size = 10;
}

Vector::~Vector(void)
{
	if (beg != 0)delete[] beg;
	beg = 0;
}

void Vector::Add()
{
	Object* p;
	cout << "1.Person" << endl;
	cout << "2.Student" << endl;
	int y;
	cin >> y;
	if (y == 1) {
		Persona* a = new (Persona);
		a->Input();
		p = a;
		if (cur < size) {
			beg[cur] = p;
			cur++;
		}
	}
	else if (y == 2) 
	{
		Student* b = new (Student);
		b->Input();
		p = b;
		if (cur < size) {
			beg[cur] = p;
			cur++;
		}
	}
	else return;
	
}

void Vector::Del()
{
	if (cur == 0)return;
	cur--;
}

void Vector::Show() 
{
	if (cur == 0) 
	{
		cout << "Empty" << endl;
		return;
	}
	Object** p = beg;
	for (int i = 0; i < cur; i++)
	{
		(*p)->Show();
		p++;
	}
}

int Vector::operator()()
{
	return cur;
}

void Vector::HandleEvent(const TEvent& e)
{
	if (cur == 0)
	{
		cout << "Empty" << endl;
		return;
	}
	if (e.what == evMessege)
	{
		Object** p = beg;
		for (int i = 0; i < cur; i++)
		{
			(*p)->HandleEvent(e);
			p++;
		}
	}
}