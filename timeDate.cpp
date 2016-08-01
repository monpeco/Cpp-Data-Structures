#include <iostream>
 

using namespace std;

int main(){
	int date, time, calendarYear, calendarDateAndTime, calendaDate, calendarTime;
	int hour, minute, hash;

	cout << "Give date (DDMMYYYY) and time (HHMM): ";
	cin >> date >> time;
	calendarYear = date % 10000;
	cout <<  "calendarYear: " << calendarYear << endl;

//	calendarYear = date % 10000;



	return 0;
}
