/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 4, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 4 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";
#include"MyOutput.h";

using namespace std;

namespace DaysFromTheBeginningOfYear
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

        short NumbersOfDay[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };


        return (Month == 2 && IsLeapYear(Year)) ? 29 : NumbersOfDay[Month];

    }

    int DayOrderInYear(short Year, short Month, short Day)
    {
        int Sum = 0;

        for (short i = 1; i < Month; i++)
        {
            Sum += NumberOfDaysInMonth(Year, i);
        }

        return Sum + Day;

    }

    void Run()
    {
        short Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year ? "),
            Month = MyInput::ReadNumberInRange((short)1, (short)12, "Please enter a Month ? "),
            Day = MyInput::ReadNumberInRange((short)1, (short)31, "Please enter a Day ? ");

        MyOutput::PrintNumber("\nNumber of Dayes from the beginning of the year is ", DayOrderInYear(Year, Month, Day), "\n");

    }
}