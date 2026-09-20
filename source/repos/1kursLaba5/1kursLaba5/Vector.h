#pragma once
#include "Object1.h"
#include <iostream>
#include <string>
using namespace std;

class Vector
{
public:
	Vector(void);
	Vector(int);
public:
	~Vector(void);
	void Add(Object1*);
	friend ostream& operator <<(ostream& out, const Vector&);
private:
	Object1** beg;
	int size;
	int cur;
};

