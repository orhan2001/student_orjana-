#pragma once
#include <string>
using namespace std;

class BasDan {
	public:
		unsigned int InstitutRad(const string& city,const string& institut ); // мы должны найти деньги 
		unsigned int Expenses(const string& city, const string& age );// 
		unsigned int Transport(const string& city, const string& district, const string& institute);
		unsigned int Fun(const string& city, const string& adress, const string& cinema , const string& caffe);
		// у кафе и кино могут быть разжные адреса 
		// без структуры много будет переменных 

		 



};