#include "Student.h"


Student::Student(void):Persona()
{
	raiting = 0;
}

Student::~Student(void)
{
}
void Student::Show()
{
	cout << "\nName => | " << name << " |";
	cout << "\nAge => | " << age << " |";
	cout << "\nRaiting => | " << raiting << " |" << endl;
}

void Student::Input()
{
	cout << "\nName ? =>  "; cin >> name; 
	cout << "\nAge ? =>  "; cin >> age; 
	cout << "\nRaiting ? => "; cin >> raiting; 
}

Student::Student(string S, int I, float F):Persona(S,I)
{
	raiting = F;
}

Student::Student(const Student& s)
{
	name = s.name;
	age = s.age;
	raiting = s.raiting;
}

void Student::Set_raiting(float F)
{
	raiting = F;
}

Student& Student::operator=(const Student& s)
{
	if(&s == this) return *this;
	name = s.name;
	age = s.age;
	raiting = s.raiting;
	return *this;
	// TODO: вставьте здесь оператор return
}