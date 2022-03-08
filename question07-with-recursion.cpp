/*
Question 7 (Part 1) with recursion
Write a program to calculate GCD (Greatest Common Divisor) of two numbers 
(i) with recursion 
(ii) without recursion
*/

#include <iostream>
using namespace std;
int hcf(int num1, int num2);
int main() {
    int num1, num2;
    cout<<"Enter first integer: ";
    cin>>num1;
    cout<<"Enter second integer: ";
    cin>>num2;
    cout<<"G.C.D of the two numbers is "<<hcf(num1, num2);
    return 0;
}

int hcf(int num1, int num2) {
    if (num2 != 0)
        return hcf(num2, num1 % num2);
    else
        return num1;
}