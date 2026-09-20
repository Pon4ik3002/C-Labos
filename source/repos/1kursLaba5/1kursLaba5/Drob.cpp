#include "Drob.h"

Drob::Drob(void)
{
	integVol = 0;
	fractionVol = 0;
}

Drob::~Drob(void)
{
}

void Drob::Show()
{
	cout << "\nIbtegeVol = " << integVol;
	cout << "FractionVol = " << fractionVol;
}

Drob::Drob(int I, double D)
{
	integVol = I;
	fractionVol = D;
}

Drob::Drob(const Drob& d)
{
	integVol = d.integVol;
	fractionVol = d.fractionVol;
}

void Drob::Set_fractionVol(float F)
{
	fractionVol = F;
}

void Drob::Set_integVol(int I)
{
	integVol = I;
}

Drob& Drob::operator=(const Drob& d)
{
	if (&d == this) return *this;
	integVol = d.integVol;
	fractionVol = d.fractionVol;
	return *this;
	// TODO: вставьте здесь оператор return
}
bool Drob::operator>(const Drob& d)
{
	if (&d == this) return false;
	if (this->integVol > d.integVol || (this->integVol == d.integVol && this->fractionVol > d.fractionVol)) return true;
	return false;
	// TODO: вставьте здесь оператор return
}
bool Drob::operator<(const Drob& d)
{
	if (&d == this) return false;
	if (this->integVol < d.integVol || (this->integVol == d.integVol && this->fractionVol < d.fractionVol)) return true;
	return false;
	// TODO: вставьте здесь оператор return
}
void Drob::sravn(Drob d2)
{
	if (*this > d2) { cout << "Первый больше. \n"; }
	else {
		cout << "Второй больше. \n";
	}
}

istream& operator>>(istream& in, Drob& d)
{
	double temp;
	cout << " Number = "; in >> temp;
	d.integVol = temp / 1;
	d.fractionVol = temp - d.integVol;
	cout << "\n";
	return in;
	// TODO: вставьте здесь оператор return
}

ostream& operator<<(ostream& out, Drob& d)
{
	out << " Number = " << d.integVol << "||" << d.fractionVol;
	out << "\n";
	return out;
	// TODO: вставьте здесь оператор return
}
