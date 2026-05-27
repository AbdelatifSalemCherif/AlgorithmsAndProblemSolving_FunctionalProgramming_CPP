/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 7, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 17 Functions
==================================================================
*/

#include<iostream>

#include"MyDateProcess.h";

using namespace std;

namespace WeekendsAndBusinessDays
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

    short DayIndex(sDate Date)
    {
        short a = (14 - Date.Month) / 12, y = Date.Year - a, m = Date.Month + 12 * a - 2;

        return (Date.Day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
    }

    string GetDayName(short ThisDayIndex)
    {
        string DaysName[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Sutarurday" };

        return DaysName[ThisDayIndex];
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

    bool IsFirstDayInMonth(sDate Date)
    {
        return Date.Day == 1;
    }

    bool IsFirstMonthInYear(sDate Date)
    {
        return Date.Month == 1;
    }

    short DayOrderInYear(sDate Date)
    {
        short Sum = 0;

        for (short i = 1; i < Date.Month; i++)
        {
            Sum += NumberOfDaysInMonth(Date.Year, i);
        }

        return Sum + Date.Day;

    }

    void PrintDate(string MessageBefore, sDate Date, string MessageAfter)
    {
        cout << MessageBefore << Date.Day << "/" << Date.Month << "/" << Date.Year << MessageAfter;
    }

    bool IsEndOfWeek(sDate Date, bool IsArabCountry = true)
    {
        short ThisDayIndex = DayIndex(Date);

        return IsArabCountry ? ThisDayIndex == 6 : ThisDayIndex == 0;
    }

    bool IsWeekEnd(sDate Date, bool IsArabeCountry = true)
    {
        short ThisDayIndex = DayIndex(Date);

        return IsArabeCountry ? ThisDayIndex > 4 : ThisDayIndex == 0 || ThisDayIndex == 6;
    }

    bool IsBusinessDay(sDate Date, bool IsArabeCountry = true)
    {
        return !IsWeekEnd(Date, IsArabeCountry);
    }

    short DaysUntilTheEndOfYear(sDate Date)
    {
        return NumberOfDaysInYear(Date.Year) - DayOrderInYear(Date);
    }

    short DaysUntilTheEndOfMonth(sDate Date)
    {
        return NumberOfDaysInMonth(Date.Year, Date.Month) - Date.Day;
    }

    int DaysUntilTheEndOfWeek(sDate Date, bool IsArabeCountry = true)
    {
        short ThisDayIndex = DayIndex(Date);

        return IsArabeCountry ? 7 - (ThisDayIndex + 1) : (++ThisDayIndex > 2) ? 9 - ThisDayIndex : 2 - ThisDayIndex;
    }

    sDate AdapdatorSDateFromLibrary(MyDateProcess::sDate Date)
    {
        sDate DateAdapted;

        DateAdapted.Day = Date.Day;
        DateAdapted.Month = Date.Month;
        DateAdapted.Year = Date.Year;

        return DateAdapted;
    }

    void Run()
    {
        sDate Today = AdapdatorSDateFromLibrary(MyDateProcess::GetTodayDate());

        PrintDate("Today is " + GetDayName(DayIndex(Today)) + ", ", Today, "\n\n");


        cout << "Is it end of week ?" << endl;
        (IsEndOfWeek(Today)) ? cout << "Yes, it is end of week." << endl << endl : cout << "No, it is Not end of week."
            << endl << endl;

        cout << "Is it weekend ?" << endl;
        (IsWeekEnd(Today)) ? cout << "Yes, it is weekend." << endl << endl : cout << "No, it is Not weekend." << endl << endl;

        cout << "Is it a business day ?" << endl;
        (IsBusinessDay(Today)) ? cout << "Yes, it is a business day." << endl << endl : cout << "No, it is Not a business day."
            << endl << endl;


        cout << "Dayes until end of week : " << DaysUntilTheEndOfWeek(Today) << endl << endl;

        cout << "Dayes until end of month : " << DaysUntilTheEndOfMonth(Today) << endl << endl;

        cout << "Dayes until end of year : " << DaysUntilTheEndOfYear(Today) << endl << endl;

    }
}