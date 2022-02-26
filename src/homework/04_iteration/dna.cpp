#include "dna.h"
using namespace std;

// Factorial function
int factorial(int num)
{
    //using a loop maybe a for(int h :num) do something 
    // or use do ...while
    int sum = 0;

    
    while (num > 0)
    {
        sum = sum + (num * (num-1));
        //num = num - 1;
    }
    return sum;
}


// gcd (Greatest Common Divisor) function
int gcd(int num1, int num2)
{

    //using a loop maybe a for(int h :num) do something 
    // or use do ...while
    while (num1 != num2)
    {
        if (num1 < num2)
            num1 = num2;

        if (num1 > num2)
            num1 = num2 - num1;        
        
    }

    return num1;
}