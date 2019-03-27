#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string name;
	double tithe;

	double vision = 7.32;
	double dentist = 3.34;
	double state;
	double fedIncome;
	double fedMedicare;
	double fedSocial;

	double gross;
	double net;

	double total;

	double gas= 25.00;
	double projects;
	double clothes;
	double savings = 50.00;
	double spending;
	double food;
	double car;
	double insurance = 220.00;



	cout << "enter the gross amount" << endl;
	cin >> gross;

	//total = gross;
	tithe = gross * .10;
	net = gross - (vision + dentist);
	state = gross * .03747;
	fedIncome = (gross * .025534) + 5;
	fedSocial = (gross * .06095);
	fedMedicare = gross * .01425;
	
	net = gross - (fedIncome + fedMedicare + fedSocial + state);
	total = net - (tithe);

	cout << "gross: $" <<fixed<<setprecision(2)<< gross << endl;
	cout << "State income tax: $" << fixed << setprecision(2) << state << endl;
	cout << "Federal income tax: $" << fixed << setprecision(2) << fedIncome << endl;
	cout << "Social Security tax: $" << fixed << setprecision(2) << fedSocial << endl;
	cout << "Medicare tax: $" << fixed << setprecision(2) << fedMedicare << endl;
	cout << "Net: $" << fixed << setprecision(2) <<net << endl;
	cout << "Tithe: $" << fixed << setprecision(2) << tithe << endl;
	cout << "total: $" << fixed << setprecision(2) <<total<< endl;

	total = total - gas - savings - insurance;

	clothes = total * .05;
	total -= clothes;

	projects = total *.25;
	total -= projects;

	food = total *.25;
	total -= food;

	car = total * .10;
	total -= car;

	spending = total;

	cout << "Gas $" << gas << endl;
	cout << "Savings $" << savings<<endl;
	cout << "insurance $" << insurance << endl;
	cout << "Clothes $" << clothes << endl;
	cout << "Projects $" << projects << endl;
	cout << "Food $" << food << endl;
	cout << "Spending $" << spending << endl;

	system("pause");
	return 0;
}