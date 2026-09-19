#include <iostream>
using namespace std;

class Time {
	int min, sec;
public:
	Time() 
	{
		min = 0; 
		sec = 0;
	}
	Time(int M , int S)
	{
		min = M;
		sec = S;
	}
	Time(const Time& t) {
		min = t.min;
		sec = t.sec;
	}
	~Time();
	int get_min();
	int get_sec();
	void set_min(int);
	void set_sec(int);
	Time& operator = (const Time&);
	Time& operator ++ ();
	Time operator ++ (int);
	Time operator + (const Time&);
	friend istream& operator >> (istream& in, Time& t);
	friend ostream& operator << (ostream& out,const Time& t);
};