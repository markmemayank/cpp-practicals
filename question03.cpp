/*
Question 3:
Write a program that prints a table indicating the number of occurrences of 
each alphabet in the text entered as command line arguments.
 */

#include <iostream>
#include <string>
using namespace std;

string table(string str)
{
    int n = str.size();

    bool check[n];
    for (int i = 0; i < n; i++)
    {
        check[i] = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (check[i] == false)
            continue;

                int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                check[j] = false;
            }
        }
        cout << "No of occurences of " << str[i] << " is " << count << " " << "times" << endl;
    }
}

int main()
{
    string x;
    cout << "Enter the string: ";
    getline(cin, x);
    table(x);

    return 0;
}