#include <iostream>
#include <string>
#include "Student.h"
using namespace std;
Student::Student() {
	fio = "";
	gruppa = "";
	avgpoint = 0;
	cout << "Constructor bez parametrov dlya objecta" << this << endl;
}
Student::Student(string N,string G,float P) {
	fio = N;
	gruppa = G;
	avgpoint = P;
	cout << "Constructor s parametrov dlya objecta" << this << endl;
}
Student::Student(const Student &s) {
	fio = s.fio;
	gruppa = s.gruppa;
	avgpoint = s.avgpoint;
	cout << "Constructor  kopirovaniya dlya objecta" << this << endl;
}
Student::~Student() {
	cout << "Destructor dlya objecta" << this << endl;
}
string Student::get_fio() {
	return fio;
}
string Student::get_gruppa() {
	return gruppa;
}
float Student::get_avgpoint() {
	return avgpoint;
}
void Student::set_fio(string N) {
	fio = N;
}
void Student::set_gruppa(string G) {
	gruppa = G;
}
void Student::set_avgpoint(float P) {
	avgpoint = P;
}
void Student::show() {
	cout << "FIO = " << fio << endl;
	cout << "Gruppa = " << gruppa << endl;
	cout << "Avg point = " << avgpoint << endl;
}