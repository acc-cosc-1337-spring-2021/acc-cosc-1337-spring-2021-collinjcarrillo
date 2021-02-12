//write include statements
#include "variables.h"
#include<iostream>


//write namespace using statement for cout
using std::cout;	using std::cin;


int main()
{
	double meal_ammount;
	double tip_rate;
	

	cout<<"Enter the cost of you meal: ";
	cin>>meal_ammount;

	double tax_ammount = get_sales_tax(meal_ammount);

	cout<<"Enter the tip rate: ";
	cin>>tip_rate;

	double tip_ammount = get_tip_ammount(meal_ammount, tip_rate);

	double total = tip_ammount + tax_ammount + meal_ammount;

	cout<<"Meal Amount:  "<<meal_ammount<<"\n";
	cout<<"Sales Tax:    "<<tax_ammount<<"\n";
	cout<<"Tip Ammount:  "<<tip_ammount<<"\n";
	cout<<"Total:        "<<total<<"\n";

	

	return 0;
}
