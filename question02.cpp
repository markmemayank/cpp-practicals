/*
Question No.2
Write a program to remove the duplicates from an array.
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> a;
    int arr[] = {1, 1, 2, 3, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        a.insert(arr[i]);
    }
    set<int>::iterator itr;
    for (itr = a.begin(); itr != a.end(); itr++)
    {
        cout << *itr << ' ';
    }

    return (0);
}
