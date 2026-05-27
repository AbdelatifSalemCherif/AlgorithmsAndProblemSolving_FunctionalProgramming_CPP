/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 3, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 7 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";

using namespace std;

namespace NumberOfDays_Hours_Minutes_SecondsInAYear
{
    bool IsLeapYear(short Year)
    {
        return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
    }

    short NumberOfDaysInYear(short Year)
    {
        return (IsLeapYear(Year)) ? 366 : 365;
    }

    int NumberOfHoursInYear(short Year)
    {
        return NumberOfDaysInYear(Year) * 24;
    }

    int NumberOfMinutesInYear(short Year)
    {
        return NumberOfHoursInYear(Year) * 60;
    }

    int NumberOfSecondsInYear(short Year)
    {
        return NumberOfMinutesInYear(Year) * 60;
    }

    void PrintResults(int Year)
    {
        cout << "\nNumber of Days    in Year [" << Year << "] is " << NumberOfDaysInYear(Year) << endl;
        cout << "Number of Hours   in Year [" << Year << "] is " << NumberOfHoursInYear(Year) << endl;
        cout << "Number of Minutes in Year [" << Year << "] is " << NumberOfMinutesInYear(Year) << endl;
        cout << "Number of Seconds in Year [" << Year << "] is " << NumberOfSecondsInYear(Year) << endl;
    }

    void Run()
    {

        short Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year to check ? ");

        PrintResults(Year);
    }
}