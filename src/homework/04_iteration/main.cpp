//write include statements
#include "dna.h"
#include<iostream>
#include<string>
//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string more = "Y";
	int choice = 0;
	string dna;
	double result;
	string comp;

	while(more == "y" || more == "Y")
	{
		cout<<"Please enter a DNA string:";
		cin>>dna;
		
		cout<<"Please select an option:"<<"\n";
		cout<<"1. Get GC Content"<<"\n";
		cout<<"2. Get DNA Complement"<<"\n";
		cin>>choice;

		if(choice == 1)
		{
			result = get_gc_content(dna);
			cout<<"The GC content is "<<result<<"."<<"\n";

		}

		if(choice == 2)
		{
			comp = get_dna_complement(dna);
			cout<<"The DNA complement is "<<comp<<"."<<"\n";
		}

		cout<<"Would you like to continue? Type y for yes:"<<"\n";
		cin>>more;
	} 
	
	return 0;
}