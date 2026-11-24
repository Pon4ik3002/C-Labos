#include "Persona.h"
#include "Student.h"

Persona::Persona(void)
{
	name = "Не указано";
	age = 0;
}

Persona::Persona(string S, int I)
{
	name = S;
	age = I;
}

Persona::Persona(const Persona& p)
{
	name = p.name;
	age = p.age;
}

Persona::~Persona(void)
{
}

void Persona::Show()
{
	cout << "\nName => | " << name << " |";
	cout << "\nAge => | " << age << " |" << endl;
}

void Persona::Input()
{
	cout << "\nName ? =>  "; cin >> name; 
	cout << "\nAge ? =>  "; cin >> age; 
}

void Persona::Set_name(string S)
{
	name = S;
}

void Persona::Set_age(int I)
{
	age = I;
}

Persona& Persona::operator=(const Persona& p)
{
	if (&p == this)return *this;
	name = p.name;
	age = p.age;
	return *this;
	
}
void Persona::HandleEvent(const TEvent& e)
{
	if (e.what == evMessege)
	{
		switch (e.command) 
		{
		case cmGet:cout << "Name = " << Get_name() << endl;
			break;
		}
	}
}
