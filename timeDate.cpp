#include <iostream>
 

using namespace std;

int main(){
	int date, time, calendarYear, calendarDayAndMonth, calendarMonth, calendarDay;
	int hour, minute, hash;

	cout << "Give date (DDMMYYYY) and time (HHMM): ";
	cin >> date >> time;
	calendarYear = date % 10000;
	calendarDayAndMonth = date / 10000;
	calendarMonth = calendarDayAndMonth % 100;
	calendarDay = calendarDayAndMonth / 100;
	cout <<  "calendarYear: " << calendarYear << endl;
	cout <<  "calendarDayAndMonth: " << calendarDayAndMonth << endl;
	cout <<  "calendarMonth: " << calendarMonth << endl;
	cout <<  "calendarDay: " << calendarDay << endl;




	return 0;
}
