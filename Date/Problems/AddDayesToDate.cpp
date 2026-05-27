/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 5, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 8 Functions
==================================================================
*/

#include<iostream>
#include<string>

#include"MyInput.h";

using namespace std;

namespace AddDayesToDate
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

    short NumberOfDaysInYear(short Year)
    {
        return (IsLeapYear(Year)) ? 366 : 365;
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

    void DateFromDayOrderInYear(short Year, int DayOrderInYear, short& Month, short& Day)
    {

        short NumberOfDayInMonth;

        for (short i = 1; i <= 12; i++)
        {
            NumberOfDayInMonth = NumberOfDaysInMonth(Year, i);

            if (DayOrderInYear <= NumberOfDayInMonth)
            {
                Month = i;
                Day = DayOrderInYear;
                i = 13;
            }

            DayOrderInYear -= NumberOfDayInMonth;
        }

    }

    sDate AddDaysToDate(short Year, short Month, short Day, int AddingDays)
    {
        sDate Date;

        Date.Day = Day;
        Date.Month = Month;
        Date.Year = Year;

        short DaysOfMonth, DaysOfYear = (Date.Month > 2) ? NumberOfDaysInYear(Date.Year + 1) : NumberOfDaysInYear(Date.Year);

        while (AddingDays >= DaysOfYear)
        {
            Date.Year++;

            AddingDays -= DaysOfYear;

            DaysOfYear = (Date.Month > 2) ? NumberOfDaysInYear(Date.Year + 1) : NumberOfDaysInYear(Date.Year);

        }

        DaysOfMonth = NumberOfDaysInMonth(Date.Year, Date.Month);

        while (AddingDays >= DaysOfMonth)
        {
            if (++Date.Month > 12)
            {
                Date.Month = 1;
                Date.Year++;
            }

            AddingDays -= DaysOfMonth;

            DaysOfMonth = NumberOfDaysInMonth(Date.Year, Date.Month);

        }

        if ((Date.Day += AddingDays) > DaysOfMonth)
        {
            if (++Date.Month > 12)
            {
                Date.Month = 1;
                Date.Year++;
            }

            Date.Day -= DaysOfMonth;

        }

        return Date;
    }

    void PrintDate(string MessageBefore, sDate Date, string MessageAfter)
    {
        cout << MessageBefore << Date.Day << "/" << Date.Month << "/" << Date.Year << MessageAfter;
    }

    void Run()
    {
        short Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year ? "),
            Month = MyInput::ReadNumberInRange((short)1, (short)12, "Please enter a Month ? "),
            Day = MyInput::ReadNumberInRange((short)1, (short)31, "Please enter a Day ? ");

        int DaysToAdd = MyInput::ReadPositiveNumber((int)0, "\nHow many days to add ? ");

        PrintDate("\nDate after adding [" + to_string(DaysToAdd) + "] days is : "
            , AddDaysToDate(Year, Month, Day, DaysToAdd), "\n");

    }
}