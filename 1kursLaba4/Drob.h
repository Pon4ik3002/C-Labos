#pragma once
#include "Pair.h"
class Drob :
    public Pair
{
public:
    Drob(void);
public:
	virtual ~Drob(void);
	Drob(int,double);
	Drob(const Drob&);
	double Get_fractionVol() { return fractionVol; }
	int Get_integVol() { return integVol; }
	void Set_fractionVol(float);
	void Set_integVol(int);
	Drob& operator= (const Drob&);
	bool  operator > (const Drob&);
	bool operator < (const Drob&);
	void sravn( Drob);
	friend istream& operator >> (istream& in, Drob& d);
	friend ostream& operator << (ostream& out, Drob& d);
protected:
	int integVol;
    double fractionVol;
};

