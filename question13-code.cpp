/*
Question 13:
Create a class Student containing fields for Roll No., Name, Class, Year and Total
Marks. Write a program to store 5 objects of Student class in a file. Retrieve these records
from file and display them.
*/

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

class StudentInfo
{
public:
    int Student_RollNumber;
    string Student_Name;
    int Student_Class;
    int Student_Year;
    int Student_Marks;
};

int main()
{
    ofstream f2;
    f2.open("studentdetails.txt");

    for (int i = 0; i < 5; i++)
    {
        StudentInfo object; 
        
        cout<<"Enter roll number:";
        cin >> object.Student_RollNumber;
        f2 << object.Student_RollNumber << "  ";

        cin.ignore();
        
        cout<<"Enter student name:";
        getline(cin, object.Student_Name);
        f2 << object.Student_Name << "    ";
        
        cout<<"Enter student class:";

        cin >> object.Student_Class;
		
		cout<<"Enter student year:";
		cin>>object.Student_Year;
		cout<<"Enter student marks:"; 
		cin>>object.Student_Marks;
        f2 << object.Student_Class << "  " << object.Student_Year << "  " << object.Student_Marks << endl;
        cout<<"\n";
    }
    
    cout<<"\n\n\n\n R.No. Name Class Year Marks \n\n";
    ifstream f("studentdetails.txt");

    if (f.is_open())
        std::cout << f.rdbuf();
    

    return 0;
}