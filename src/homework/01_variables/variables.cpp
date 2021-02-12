#include "variables.h"




double get_sales_tax(double meal_ammount)
{
	long double tax_rate = .0675;
	return meal_ammount * tax_rate;
}



double get_tip_ammount(double meal_ammount, double tip_rate)
{
	return meal_ammount * tip_rate;
}



//write code for multiply_numbers function here
//function returns product of num1 and num2




