//write includes statements
#include <iostream>
#include <string>
#include "loops.h"

//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int cont = 1;
	
	int number = 0;

	cout << "\nPlease Enter a number between 1 and 10: ";
    cin >> number;
	
	do
	{
		
		
		while(number<1 || number>10) 
		{
			cout << "\nPlease Enter a number between 1 and 10: ";
    		cin >> number;

		}
		
		int fact = factorial(number);

			cout << "The factorial of " << number << " = " << fact;

		
			cout << "\nDo you want to continue? 1 for yes, 0 for no:";
			cin >> cont;

	}
	while (cont == 1);


	return 0;
}