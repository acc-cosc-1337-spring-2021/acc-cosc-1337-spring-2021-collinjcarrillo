#include "dna.h"
#include<iostream>
#include<string>
using namespace std;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
    
    double gc = 0;
    

    

    for (int i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            gc++;
        }
    }
    double cont = gc / dna.length();

    return cont;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_reverse_string(string dna)
{
    string rev;
    for (int i = dna.size() - 1; i >= 0; i--)
    {
        rev = rev.append(1, dna[i]);
    };

    return rev;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(string dna)
{
    
    string comp;
    char C = 'C';
    char T = 'T';
    char A = 'A';
    char G = 'G';

    for (int i = dna.length() - 1; i >= 0; i--)
    {
        if(dna[i] == 'G')
        {
            comp.push_back(C);
        } 
        else if (dna[i] == 'C')
        {
            comp.push_back(G);
        }
        else if (dna[i] == 'T')
        {
            comp.push_back(A);
        }
        else
        {
            comp.push_back(T);
        }
        
    };

    return comp;
}
