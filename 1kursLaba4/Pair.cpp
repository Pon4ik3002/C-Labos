#include "Pair.h"
Pair::Pair(void) {
	first = 0;
	second = 0;
}
Pair::~Pair(void) {}
Pair::Pair(int F, int S) {
	first = F;
	second = S;
}
Pair::Pair(const Pair& p) {
	first = p.first;
	second = p.second;
}
void Pair::Set_first(int F) {
	first = F;
}
void Pair::Set_second(int S) {
	second = S;
}
Pair& Pair::operator=(const Pair& p) {
	if (&p == this) return *this;
	first = p.first;
	second = p.second;
	return *this;
}
bool Pair::operator>(const Pair&p)
{ 
	if (&p == this) return false;
	if (this->first > p.first || (this->first == p.first && this->second > p.second)) return true;
	return false;
	// TODO: вставьте здесь оператор return
}
bool Pair::operator<(const Pair&p)
{
	if (&p == this) return false;
	if (this->first < p.first || (this->first == p.first && this->second < p.second)) return true;
	return false;
	// TODO: вставьте здесь оператор return
}
void Pair::sravn(const Pair p2)
{
	if (*this > p2) { cout << "Первый больше. \n"; }
	else {
		cout << "Второй больше. \n";
	}
}
istream& operator >> (istream& in, Pair& p) {
	cout << " First = "; in >> p.first;
	cout << " Second = "; in >> p.second;
	cout << "\n";
	return in;
}
ostream& operator << (ostream& out, Pair& p) {
	out << " First = " << p.first;
	out << " Second = " << p.second;
	out << "\n";
	return out;
}
