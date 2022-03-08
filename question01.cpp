/* 
Question 1: 
Write a program to compute the sum of the first n terms of the following series:
S = 1 - 1 / (2 ^ 2) + 1 / (3 ^ 3) - ... 1 / (n ^ n)
where ^ is exponentiation.
The number of terms n is to be taken from user through command line. If command line  
argument is not found then prompt the user to enter the value of n.
*/

#include <iostream>
#include <cmath>
using namespace std;

double series(int a)
{
    double sum = 0;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            // sum -= 1/i*i ---> using this, answer is printing in integer value only so I used pow function
            sum -= 1 / pow(i, i);

            // for printing elements
            // cout << "1/" << i << "^" << i << " = " << -1 / pow(i, i) << endl;
        }
        else
        {
            // sum+= 1/i*i ---> using this, answer is printing in integer value only so I used pow function
            sum += 1 / pow(i, i);

            // for printing elements
            // cout << "1/" << i << "^" << i << " = " << 1 / pow(i, i) << endl;
        }
    }
    return sum;
}

int main()
{
    int number;
    cout << "Enter the number (till which you want to calculate the sum) : ";
    cin >> number;
    cout << " The sum is:  " << series(number) << endl;

    return 0;
}