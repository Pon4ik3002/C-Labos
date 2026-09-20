#include "Time.h"

Time::Time(void)
{
	min = sec = 0;
}

Time::Time(int M, int S)
{
	min = M;
	sec = S;
}

Time::Time(const Time&t)
{
	min = t.min;
	sec = t.sec;
}

Time& Time::operator=(const Time&t)
{
	min = t.min;
	sec = t.sec;
	return *this;
	// TODO: вставьте здесь оператор return
}

Time Time::operator+(Time k)
{
	int t = min * 60 + sec;
	int kt = k.min * 60 + k.sec;
	t += kt;
	Time temp(t / 60, t % 60);
	return temp;
}

ostream& operator<<(ostream& out, const Time&t)
{
	out << t.min << ":" << t.sec;
	return out;
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, Time&t)
{
	cout << "\nMin = "; in >> t.min;
	cout << "\nSec = "; in >> t.sec;
	if (t.sec > 60) {
		t.min += t.sec / 60;
		t.sec = t.sec % 60;
	}
	return in;
	// TODO: вставьте здесь оператор return
}
