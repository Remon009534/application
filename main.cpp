#include <iostream>
#include <string>
using namespace std;

int main()
{
    string students[6];
    int mark1[6];
    int mark2[6];
    int mark3[6];
    int mark4[6];
    int mark5[6];
    int mark6[6];
    int total1;
    int total2;
    int total3;
    int total4;
    int total5;
    int total6;
    
    int size = sizeof(mark6) / sizeof(mark6[0]);

    cout << "Enter student name1: ";
    cin >> students[0];
    cout << endl;
    
    for(int i = 0; i < size; i++)
    {
        cout << "Enter student marks: ";
        cin >> mark1[i];
        total6 = total1 + mark1[i];
    }

    cout << "Enter student name2: ";
    cin >> students[1];
    cout << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter student marks: ";
        cin >> mark2[i];
        total6 = total2 + mark2[i];
    }

    cout << "Enter student name3: ";
    cin >> students[2];
    cout << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter student marks: ";
        cin >> mark3[i];
        total6 = total3 + mark3[i];  
    }

    cout << "Enter student name4: ";
    cin >> students[3];
    cout << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter student marks: ";
        cin >> mark4[i];
        total6 = total4 + mark4[i]; 
    }

    cout << "Enter student name5: ";
    cin >> students[4];
    cout << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter student marks: ";
        cin >> mark5[i];
        total6 = total5 + mark5[i];
    }

    cout << "Enter student name6: ";
    cin >> students[5];
    cout << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter student marks: ";
        cin >> mark6[i];
        total6 = total6 + mark6[i];
    }

    cout << "\n************* Total Marks **************" << "\n";

    cout << students[0] << " : " << total1 << "\n";
    cout << students[1] << " : " << total2 << "\n";
    cout << students[2] << " : " << total3 << "\n";
    cout << students[3] << " : " << total4 << "\n";
    cout << students[4] << " : " << total5 << "\n";
    cout << students[5] << " : " << total6 << "\n";

    return 0;
}