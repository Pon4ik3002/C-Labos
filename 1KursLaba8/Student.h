#pragma once
#include "Persona.h"

class Student :
    public Persona
{
public:
    Student(void);
    ~Student(void);
    void Show();
    void Input();
    Student(string, int, float);
    Student(const Student&);
    float Get_raiting() { return raiting; }
    void Set_raiting(float);
    Student& operator= (const Student&);
protected:
    float raiting;
};

