#pragma once
#include <string>
#include <iostream>
#include "Object.h"
#include "Event.h"
using namespace std;

class Persona :
	public Object
{
public:
	Persona(void);
	Persona(string , int);
	Persona(const Persona&);
	virtual ~Persona(void);
	void Show();
	void Input();
	string Get_name() { return name; }
	int Get_age() { return age; }
	void Set_name(string);
	void Set_age(int);
	Persona& operator=(const Persona&);
	void HandleEvent(const TEvent& e);
protected:
	string name;
	int age;
};

