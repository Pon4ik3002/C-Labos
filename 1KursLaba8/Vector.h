#pragma once
#include "Event.h"
#include "Object.h"

class Vector 
{
public:
	Vector(int);
	Vector(void);
	~Vector(void);
	void Add();
	void Del();
	void Show();
	int operator ()();
	void HandleEvent(const TEvent& e);
protected:
	Object** beg;
	int size;
	int cur;
};

