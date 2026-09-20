#pragma once
#include "Object1.h"
#include <iostream>
#include <string>
using namespace std;

class Pair :
    public Object1
{
public:
	Pair(void);
public:
	virtual ~Pair(void);
	void Show();
	Pair(int, int);
	Pair(const Pair&);
	int Get_first() { return first; }
	int Get_second() { return second; }
	void Set_first(int);
	void Set_second(int);
	Pair& operator= (const Pair&);
	bool  operator > (const Pair&);
	bool operator < (const Pair&);
	void sravn(Pair);
	friend istream& operator >> (istream& in, Pair& p);
	friend ostream& operator << (ostream& out, Pair& p);
protected:
	int first;
	int second;
};

