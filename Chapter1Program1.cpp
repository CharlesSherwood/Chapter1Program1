/*
 ChapterProgram1.cpp
 Programmer:Charles Sherwood
 Date:01/25
 Requirements:
Take the employees hours worked for the week and 
payrate and compute his grosspay and display
it on the monitor.
*/

#include <iostream>
using namespace std;

int main()
{
	double hours, rate, pay;

	//how many hours worked
	cout << "How many hours did you work this week?";
	cin >> hours;

	//Whats the hourly payrate
	cout << "How much do you make per hour?";
	cin >> rate;


	//Calculate how much the Grosspay is
	pay = hours * rate;

	//Display it onto the monitor
	cout << "You have earned $" << pay << endl;
	return 0;
	

}