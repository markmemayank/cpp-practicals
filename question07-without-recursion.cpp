/*
Question 7 (Part 1) with recursion
Write a program to calculate GCD (Greatest Common Divisor) of two numbers 
(i) with recursion 
(ii) without recursion
*/

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, i, gcd;

    cout<<"Enter first integer: ";
    cin>>num1;
    cout<<"Enter second integer: ";
    cin>>num2;

    for(i=1; i <= num1 && i <= num2; ++i)
    {
        // Checks if i is factor of both integers
        
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }

    cout<<"G.C.D of the two numbers is: "<< gcd;

    return 0;
}