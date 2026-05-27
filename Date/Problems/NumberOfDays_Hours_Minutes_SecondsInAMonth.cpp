/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 3, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 7 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";

using namespace std;

namespace NumberOfDays_Hours_Minutes_SecondsInAMonth
{
    bool IsLeapYear(short Year)
    {
        return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
    }

    short NumberOfDaysInMonth(short Year, short Month)
    {
        if (Month < 1 || Month>12)
        {
            return 0;
        }

        return (Month == 2) ? (IsLeapYear(Year)) ? 29 : 28 : (Month <= 7 && Month % 2 != 0) ? 31 :
            (Month > 7 && Month % 2 == 0) ? 31 : 30;

    }

    int NumberOfHoursInMonth(short Year, short Month)
    {
        return NumberOfDaysInMonth(Year, Month) * 24;
    }

    int NumberOfMinutesInMonth(short Year, short Month)
    {
        return NumberOfHoursInMonth(Year, Month) * 60;
    }

    int NumberOfSecondsInMonth(short Year, short Month)
    {
        return NumberOfMinutesInMonth(Year, Month) * 60;
    }

    void PrintResults(int Year, short Month)
    {
        cout << "\nNumber of Days    in Month [" << Month << "] is " << NumberOfDaysInMonth(Year, Month) << endl;
        cout << "Number of Hours   in Month [" << Month << "] is " << NumberOfHoursInMonth(Year, Month) << endl;
        cout << "Number of Minutes in Month [" << Month << "] is " << NumberOfMinutesInMonth(Year, Month) << endl;
        cout << "Number of Seconds in Month [" << Month << "] is " << NumberOfSecondsInMonth(Year, Month) << endl;
    }

    void Run()
    {

        short Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year to check ? ");
        short Month = MyInput::ReadNumberInRange((short)1, (short)12, "Please enter a Month to check (between 1 to 12) ? ");

        PrintResults(Year, Month);

    }
}