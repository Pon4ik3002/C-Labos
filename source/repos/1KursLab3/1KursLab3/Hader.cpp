#include <iostream>
#include "Header.h"
using namespace std;

Time::~Time()
{
}

int Time::get_min()
{
	return min;
}

int Time::get_sec()
{
	return sec;
}

void Time::set_min(int)
{
}

void Time::set_sec(int)
{
}

Time& Time::operator=(const Time&t)
{
	if (&t == this) return *this;
	min = t.min;
	sec = t.sec;
	return *this;
}
Time& Time::operator++ ()
{
	int temp = min * 60 + sec;
	temp++;
	min = temp / 60;
	sec = temp % 60;
	return *this;
}
Time Time::operator ++ (int)
{
	int temp = min * 60 + sec;
	temp++;
	Time t(min, sec);
	min = temp / 60;
	sec = temp % 60;
	return t;
}
Time Time::operator+ (const Time& t)
{
	int temp1 = min * 60 + sec;
	int temp2 = t.min * 60 + t.sec;
	Time p;
	p.min = (temp1 + temp2) / 60;
	p.sec = (temp1 + temp2) % 60;
	return p;
}
istream& operator>> (istream& in, Time& t)
{
	cout << "min = "; in >> t.min;
	cout << "sec = "; in >> t.sec;
	if (t.sec >= 60)
	{
		t.min = t.min + t.sec / 60;
		t.sec = t.sec % 60;
	}
	return in;
}
ostream& operator << (ostream& out,const Time& t)
{
	return (out << t.min << " : " << t.sec);
} 
