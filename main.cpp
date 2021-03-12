#include <iostream>
#include "basDan.h"
#include <fstream>
#include <string>
#include "Student.h"


using namespace std;

int main() {
	unsigned int m;


	string name ;
	string city;
	string age;
	string district; // улица
	string adress;
	string institute;
	string caffe;
	string cinema;
	unsigned int workDay;
	unsigned int holiday;
	cout << "input name :" << endl;
	cin >> name;
	cout << "input city :" << endl;
	cin >> city;
	cout << "input age :" << endl;
	cin >> age;
	cout << "input district  :" << endl;
	cin >> district;
	cout << "input adress :" << endl;
	cin >> adress;
	cout << "input institute :" << endl;
	cin >> institute;
	cout << "input caffe :" << endl;
	cin >> caffe;
	cout << "input cinema :" << endl;
	cin >> cinema;
	cout << "input workday :" << endl;
	cin >> workDay;
	cout << "input holiday :" << endl;
	cin >> holiday;
	Student maks(name, city, age, district, adress, institute, caffe, cinema, workDay, holiday);
	cout<< maks.calculatureLife(workDay, holiday)<< endl;

	return 0;

}