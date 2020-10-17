#include<iostream>
#include<string>
using namespace std;


int main() {
	
	string EName, PPeriod;
	
	double RHWork = 0, RRate = 0, BSalary = 0, OHRendered = 0;
	double OTPay = 0, Gross = 0, Tax = 0, Net = 0;


	//Print--PPeriod
	cout << "\n\t   Payroll Period\n\t";
	getline(cin,PPeriod),cout << "\n";

	//Print--EName
	cout << " Employee Name: ";
	getline(cin, EName), cout << "\n";

	cout << " Regular Hours work:\t\t";
	cin >> RHWork;
	cout << " Regular rate:\t\t\tP ";
	cin >> RRate;

	//Compute BSalary
	BSalary = RHWork * RRate;
	cout << " Basic Salary for the Week:\tP ";
	cin >> BSalary, cout << "\n";

	cout << " Overtime Hours Rendered:\t";
	cin >> OHRendered;

	//Compute----OTPay, Gross, Tax, Net
	OTPay = OHRendered * RRate * 1.5;
	Gross = BSalary + OTPay;
	Tax = Gross * 0.15;
	Net = Gross - Tax;

	//Print--OTPay, Gross, Tax, Net
	cout << " Overtime pay:\t\t\tP " << OTPay << "\n\n";

	cout << " Gross pay:\t\t\tP "	 << Gross << "\n";
	cout << " Less Tax:\t\t\tP " << Tax << "\n\n";

	cout << " Net Pay:\t\t\tP " << Net << "\n\n\n\n";
};