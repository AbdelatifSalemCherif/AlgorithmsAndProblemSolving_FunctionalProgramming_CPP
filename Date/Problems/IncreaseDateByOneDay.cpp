/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 5, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 8 Functions
==================================================================
*/

#include<iostream>
#include"MyInput.h";

using namespace std;

namespace IncreaseDateByOneDay
{
    struct sDate
    {
        short Year;
        short Month;
        short Day;
    };

    sDate ReadDate()
    {
        sDate Date;

        Date.Day = MyInput::ReadNumberInRange((short)1, (short)31, "Please enter a Day ? ");
        Date.Month = MyInput::ReadNumberInRange((short)1, (short)12, "Please enter a Month ? ");
        Date.Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year ? ");

        return Date;
    }

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

    bool IsLastDayInMonth(sDate Date)
    {
        return Date.Day == NumberOfDaysInMonth(Date.Year, Date.Month);
    }

    bool IsLastMonthInYear(sDate Date)
    {
        return Date.Month == 12;
    }

    sDate IncreaseDateByOneDay(sDate Date)
    {
        if (IsLastDayInMonth(Date))
        {
            if (IsLastMonthInYear(Date))
            {
                Date.Year++;
                Date.Month = 1;
                Date.Day = 1;
            }
            else
            {
                Date.Month++;
                Date.Day = 1;
            }
        }
        else
        {
            Date.Day++;
        }

        return Date;
    }

    void PrintDate(string MessageBefore, sDate Date, string MessageAfter)
    {
        cout << MessageBefore << Date.Day << "/" << Date.Month << "/" << Date.Year << MessageAfter;
    }

    void Run()
    {
        sDate Date = ReadDate();

        Date = IncreaseDateByOneDay(Date);


        PrintDate("\nDate after adding one day is : ", Date, "\n");

    }
}