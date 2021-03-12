#include <iostream>
#include "basDan.h"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

unsigned int BasDan::InstitutRad(const string& city, const string& institut)
{
	ifstream basa;
	basa.open("Institute.csv");
	
	if (!basa.is_open()) { // проверка открытого файла  ? 0: 1
		cout << "error  0";
	}
	else {
		string fCity;
		string univer;
		string dinner;
		string line;
		//unsigned int cost;
		while (getline(basa, line) ) {
			stringstream lineStream(line);  //  позволяет работать с строкой 
										    //класс берет и считывает все данные 
			getline(lineStream, fCity,','); // 'один символ одиночные кавычки ' 
			getline(lineStream, univer,',');
			getline(lineStream, dinner, ',');
			if (city == fCity && institut == univer) {
				//cost = stoi(dinner);   // stoi - первод строки в число 
				return  stoi(dinner);
			}
		}

	}
	basa.close();

	return 0;
}


unsigned int BasDan::Expenses(const string& city, const string& age)
{
	string fCity;
	string fAge;
	string avorageCost;
	string otherCost;
	string line;

	ifstream basa;

	basa.open("costs.csv");

	if (!basa.is_open()) {
		cout << "file dont open";
	}
	else {
		while (getline(basa, line)) { // LINE передаем  в функцию 
			stringstream lineStream(line);
			getline(lineStream, fCity, ','); 
			getline(lineStream, fAge, ',');
			getline(lineStream, avorageCost, ',');
			getline(lineStream, otherCost, ',');
			if (fCity == city && fAge == age) {
				return (stoi(avorageCost) + stoi(otherCost));
			}
		}
	}
	basa.close();


	return 0;
}

unsigned int BasDan::Transport(const string& city, const string& district, const string& institute)
{

	ifstream basa;
	basa.open("Transport.csv");



	if (!basa.is_open()) {
		cout << "file dont open "; 
	}
	else {
		string fCity;
		string fDistrict;
		string university;
		string trLamba;
		string line; 

		while (getline(basa, line)) {
			stringstream lineStream(line);
			getline(lineStream, fCity, ',');
			getline(lineStream, fDistrict, ',');
			getline(lineStream, university, ',');
			getline(lineStream, trLamba, ',');

			if (fCity == city && fDistrict == district && university == institute) {
				return stoi(trLamba);
			}

		}
	}
	return 0;

}

struct Game{
	string city;
	string adres;
	string name;
	string cost;

};
unsigned int BasDan::Fun(const string& city, const string& adress, const string& cinema, const string& caffe)
{

	ifstream basa;
	basa.open("Caffe-and-cinema.csv");
	if (!basa.is_open()) {
		cout << "file dont open";
		
	}
	else {
		Game  caffeq;
		Game cinemaq;
		string line;
		while (getline(basa, line)) {
			stringstream lineStream(line);
			getline(lineStream, caffeq.city, ',');
			getline(lineStream, caffeq.adres, ',');
			getline(lineStream, caffeq.name, ',');
			getline(lineStream, caffeq.cost, ',');
			getline(lineStream, cinemaq.name, ',');
			getline(lineStream, cinemaq.cost, ',');
			if (city == caffeq.city && adress == caffeq.adres && cinema == cinemaq.name && caffe == caffeq.name) {
				return (stoi(caffeq.cost) + stoi(cinemaq.cost));
			}
		}
	}

	
		
	basa.close();

	return 0;
}