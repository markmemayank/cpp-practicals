/*
Question 9:
Define a class Person having name as a data member. Inherit two classes Student and
Employee from Person. Student has additional attributes as course, marks and year and
Employee has department and salary. Write display) method in all the three classes to
display the corresponding attributes. Provide the necessary methods to show runtime
polymorphism.
*/

#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    Person(string n)
    {
        name = n;
    }

    virtual void display()
    {
        cout << name << endl;
    }
};

class Student : public Person
{
public:
    string course;
    int marks;
    unsigned int year;

    Student(string n, string c, int m, int y) : Person(n)
    {
        course = c;
        marks = m;
        year = y;
    }

    void display()
    {
        cout << name << " " << course << " " << marks << " " << year << endl;
    }
};

class Employee : public Person
{
public:
    string department;
    long int salary;

    Employee(string n, string d, long s) : Person(n)
    {
        department = d;
        salary = s;
    }

    void display()
    {
        cout << name << " " << department << " " << salary << endl;
    }
};

int main()
{
    Person *obj1;

    Student obj2("Mayank", "BSc-CS", 95, 1);

    obj1 = &obj2;
    obj1->display();

    Employee obj3("Mayank K.", "Computer-Department", 5000 );
    obj1 = &obj3;
    obj1->display();

    return 0;
}