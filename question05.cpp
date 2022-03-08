/*
Question 5 : 
Write a program to merge two ordered arrays to get a single ordered array.
*/

#include <iostream>
using namespace std;

void merge (int arr1[], int arr2[], int len1, int len2) {

        int arr3[200];

        int p = 0;
        int q = 0;
        int k = 0;

        while ( p < len1 && q < len2) {

            if (arr1[p] < arr2[q]) {
                arr3[k++] = arr1[p++];
            } else {
                arr3[k++] = arr2[q++];
            }
        }

        while ( p < len1) {
            arr3[k++] = arr1[p++];
        }

        while ( q < len2) {
            arr3[k++] = arr2[q++];
        }

        for ( int c = 0; c < k; c++) {
            cout << arr3[c] << " ";
        }
                
}

int main() {

   int arr1[100], arr2[100], len1, len2;

   cout << "Enter the length of 1st array \n";
   cin >> len1;

   cout << "Enter the length of 2nd array \n";
   cin >> len2;

   cout << "Enter sorted values for 1st array \n";

   for (int i = 0; i < len1; i++) {

           cin >> arr1[i];

    }

    cout << "Enter sorted values for 2nd array \n";
    for (int j = 0; j < len2; j++) {
        cin >> arr2[j];

    }

    merge(arr1, arr2, len1, len2);
    return 0;
}