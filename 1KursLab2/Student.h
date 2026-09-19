#include <iostream>
#include <string>
using namespace std;
class Student
{
	string fio;
	string gruppa;
	float avgpoint;
public:
	Student();
	Student(string, string, float);
	Student(const Student&);
	~Student();
	string get_fio();
	void set_fio(string);
	string get_gruppa();
	void set_gruppa(string);
	float get_avgpoint();
	void set_avgpoint(float);
	void show();
	
};
