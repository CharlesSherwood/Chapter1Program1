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
#include <iomanip>

int main()
{
	double hours, rate, pay;
	


	//how many hours worked
	cout << "How many hours did you work this week?";
	cin >> hours;
	cout << "You have worked " << hours <<" hours"<< endl;


	//Whats the hourly payrate
	cout << "How much do you make per hour?";
	cin >> rate;
	cout << "You get paid $" << rate << endl;

	//Calculate how much the Grosspay is
	pay = hours * rate;

	//Display it onto the monitor
	cout<<fixed<<setprecision(2)<< "You have earned a total of $" << pay << endl;
	return 0;
	

}