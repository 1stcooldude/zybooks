#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int DateParser(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
	
	// TODO: Read dates from input, parse the dates to find the one
	//       in the correct format, and output in m/d/yyyy format
   string date;
   string month;
   int day, year;
   int month2;
   istringstream inSS;
   char dummyChar;

   getline(cin, date);

   inSS.clear();
   inSS.str(date);

   while (date != "-1"){
      inSS >> month >> day >> dummyChar >> year;
      if (inSS.eof() && dummyChar == ','){
         month2 = DateParser(month);
         cout << month2 << "/" << day << "/" << year << endl;
      }
      inSS.clear();
      getline(cin, date);
      inSS.str(date);
   }

}

