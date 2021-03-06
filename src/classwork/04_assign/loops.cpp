#include <iostream>
#include "loops.h"
using std::cout; using std::cin;

int factorial(int num)
{
    
    unsigned long long factorial = 1;

    

    
    for(int i = 1; i <=num; ++i) 
    {
        factorial *= i;
        
    }
    return factorial;

}