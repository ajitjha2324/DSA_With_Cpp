#include <iostream>
#include <string>
using namespace std;

class student
{

    string name;
    int roll_No;
    int marks;

public:
    student()
    {
        cout << "Default Constructer" << endl;
    }

    // PARAMETRIZIED CONSTRUCTER
    student(string name, int roll_No, int marks) // We can Construct only one Constructer of same Argument
    {
        this->name = name;
        this->roll_No = roll_No;
        this->marks = marks;
    }

    // CONSTRUCTER OVERLOADING :- Same Constructer Name but Different Parameters
    student(string name, int roll_No)
    {
        this->name = name;
        this->roll_No = roll_No;
    }

    // Inline Constructer
    // inline student(string name, int roll_No, int marks) : name(name), roll_No(roll_No), marks(marks)
    // {
    // }

    // COPY CONSTRUCTER
    student(student &A)
    { // We Have to have to add (&) to copy
        name = A.name;
        roll_No = A.roll_No;
        marks = A.marks;
    }

    void display()
    {
        cout << name << " " << roll_No << " " << marks << endl;
    }
};

int main()
{
    // student S1("Ajit", 25358, 89);    // We can Construct only one Constructer of same Argument
    student S2("Anshu", 25367);
    student S3("Manish", 25389, 90);
    student S4(S3); // COPY CONSTRUCTER :- COPY S3 INTO S4
    // S1.display();
    S2.display();
    S3.display();
    S4.display();
    // student S5();
    // S5 = S2;
    // S5.display();
}