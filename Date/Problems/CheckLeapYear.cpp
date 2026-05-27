/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 3, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 2 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";

using namespace std;

namespace CheckLeapYear
{
    bool IsLeapYear(int Year)
    {
        return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
    }

    void Run()
    {

        if (IsLeapYear(MyInput::ReadPositiveNumber((int)0, "Please enter year ?\n")))
        {
            cout << "\nIs a leap year" << endl;
        }
        else
        {
            cout << "\nIs Not a leap year !" << endl;
        }
    }
}