#pragma once
#include <iostream>
#include "basDan.h"
#include <string>

class Student {
private:
	string _name;
	string _city;
	string _age;
	string _district; // улица
	string _adress;
	string _institute;
	string _caffe;
	string _cinema;
	unsigned int _workDay;
	unsigned int _holiday;
	
public:
	Student
	(
		const string& name,
		const string& city,
		const string& age,
		const string& district,
		const string& adress,
		const string& institute,
		const string& caffe,
		const string& cinema,
		unsigned int& workDay,
		unsigned int& holiday
		
	);
	unsigned int calculatureLife(const unsigned int& workDay, const unsigned int& holiday);

};







