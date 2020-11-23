#include <iostream>
using namespace std;

double students_marks(double maths, double english, double history, double science, double cs)
{
    return maths + english + history + science + cs;
}

int main()
{
    double val1;
    double val2;
    double val3;
    double val4;
    double val5;

    cout << "Enter the maths marks: ";
    cin >> val1;
    cout << "Enter the english marks: ";
    cin >> val2;
    cout << "Enter the history marks: ";
    cin >> val3;
    cout << "Enter the science marks: ";
    cin >> val4;
    cout << "Enter the cs marks: ";
    cin >> val5;

        string students[6];

    for(int i = 0; i < 6; i++)
    {
        cout << "Enter your students name: " << i + 1 << ":";
        cin >> students[i]; 
    }
    for(int i = 0; i < 6; i++)
    {
        cout << i + 1 << ". " << students[i] << " = " << students_marks(val1, val2, val3, val4, val5) << "\n";
    }

    return 0;
}