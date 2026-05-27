/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 8, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 4 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";
#include"CheckNumbersInRange.h";

using namespace std;

namespace ValidateDate
{
    struct sDate
    {
        short Year;
        short Month;
        short Day;
    };

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

    bool IsValideDate(sDate Date)
    {
        return Date.Year > 0 && CheckNumbersInRange::CheckNumberInRange(Date.Month, (short)1, (short)12)
            && CheckNumbersInRange::CheckNumberInRange(Date.Day, (short)1, (short)NumberOfDaysInMonth(Date.Year, Date.Month));
    }

    void Run()
    {
        sDate Date;

        Date.Day = MyInput::ReadNumber((short)0, "Please enter a Day ? ");
        Date.Month = MyInput::ReadNumber((short)0, "\nPlease enter a Month ? ");
        Date.Year = MyInput::ReadNumber((short)0, "\nPlease enter a Year ? ");

        (IsValideDate(Date)) ? cout << "\n\nYes, Date is a valid date\n" : cout << "\a\n\nNo, Date is Not valid date\n";

    }
}