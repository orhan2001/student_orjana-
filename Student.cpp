#include "Student.h"
#include "basDan.h"

Student::Student
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
)
{
	_name = name;
	_city = city;
	_age = age;
	_district = district;
	_adress = adress;
	_institute = institute;
	_caffe = caffe;
	_cinema = cinema;
	_workDay = workDay;
	_holiday = holiday;

}

unsigned int Student::calculatureLife( const unsigned int&  workDay , const unsigned int& holiday)

{
	BasDan st1;

	unsigned int cost = 0;
	unsigned int costInstitute = st1.InstitutRad(_city , _institute);

	unsigned int costTransport = st1.Transport(_city,_district,_institute);

	unsigned int costExpenses = st1.Expenses(_city,_age);
	unsigned int costFun = st1.Fun(_city,_adress,_cinema,_caffe);
	
	if (costInstitute != 0 && costTransport != 0 && costExpenses != 0 && costFun != 0) {
		cost = (costFun * holiday)  + ((costTransport *2 + costInstitute)*workDay ) + costExpenses ;
		
	}
	else {
		if (costInstitute == 0) {
			cout << "error: institute _city  _institute  " << endl;
		}
		if (costTransport == 0) {
			cout << "error: institute _city _district  _institute  " << endl;
		}
		if (costExpenses == 0) {
			cout << "error: _city _age  " << endl;
		}
		if (costFun == 0) {
			cout << "error: _city _adress _cinema _caffe " << endl;
		}



		exit(0);



	}
	return cost;
}

