/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 7, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 18 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";

using namespace std;

namespace CalculateVacationReturnDate
{
    struct sDate
    {
        short Year;
        short Month;
        short Day;
    };

    sDate ReadDate(string Header = "")
    {
        sDate Date;

        cout << Header;

        Date.Day = MyInput::ReadNumberInRange((short)1, (short)31, "Please enter a Day ? ");
        Date.Month = MyInput::ReadNumberInRange((short)1, (short)12, "Please enter a Month ? ");
        Date.Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year ? ");

        return Date;
    }

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

    bool IsEndOfWeek(short ThisDayIndex, bool IsArabCountry = true)
    {
        return IsArabCountry ? ThisDayIndex == 6 : ThisDayIndex == 0;
    }

    bool IsWeekEnd(short ThisDayIndex, bool IsArabeCountry = true)
    {

        return IsArabeCountry ? ThisDayIndex > 4 : ThisDayIndex == 0 || ThisDayIndex == 6;
    }

    bool IsBusinessDay(short ThisDayIndex, bool IsArabeCountry = true)
    {
        return !IsWeekEnd(ThisDayIndex, IsArabeCountry);
    }

    bool IsLessDate(sDate Date1, sDate Date2)
    {

        if (Date1.Year <= Date2.Year)
        {
            if (Date1.Year == Date2.Year)
            {
                if (Date1.Month == Date2.Month)
                {
                    return Date1.Day < Date2.Day;
                }
                else if (Date1.Month < Date2.Month)
                {
                    return true;
                }

            }
            else
            {
                return true;
            }
        }

        return false;
    }

    int CalculateDiffrenceFromTowDates(sDate Date1, sDate Date2, bool IncludingLastDay2 = false)
    {
        bool IsDate1AfterDate1 = !IsLessDate(Date1, Date2);

        if (IsDate1AfterDate1)
        {
            sDate Temp = Date2;

            Date2 = Date1;
            Date1 = Temp;
        }


        int Sum = DayOrderInYear(Date2) - DayOrderInYear(Date1);

        while (Date1.Year < Date2.Year)
        {
            Sum += NumberOfDaysInYear(Date1.Year++);
        }


        return (IncludingLastDay2) ? ((IsDate1AfterDate1) ? (-1) * Sum - 1 : ++Sum) : ((IsDate1AfterDate1) ? (-1) * Sum : Sum);
    }

    int GetActualVacationDays(sDate DateFrom, sDate DateTo, bool IsArabCountry = true)
    {
        int NumberOfDays = CalculateDiffrenceFromTowDates(DateFrom, DateTo);

        int ActualVacation = (NumberOfDays / 7) * 5;

        short ThisDayIndex = DayIndex(DateFrom);

        for (short i = NumberOfDays % 7; i >= 1; i--)
        {
            if (IsBusinessDay(ThisDayIndex, IsArabCountry))
            {
                ActualVacation++;
            }

            ThisDayIndex = (ThisDayIndex == 6) ? 0 : ThisDayIndex + 1;
        }

        return ActualVacation;
    }

    sDate IncreaseDateByXDay(sDate Date, int Days)
    {
        Days += DayOrderInYear(Date);
        Date.Day = 1;
        Date.Month = 1;

        int DaysOfYear = NumberOfDaysInYear(Date.Year), DaysOfMonth = 31;


        while (Days >= DaysOfYear)
        {
            Days -= DaysOfYear;
            DaysOfYear = NumberOfDaysInYear(++Date.Year);

        }

        while (Days > DaysOfMonth)
        {
            Days -= DaysOfMonth;
            DaysOfMonth = NumberOfDaysInMonth(Date.Year, ++Date.Month);
        }

        Date.Day = Days;

        return Date;
    }

    sDate IncreaseDateByXWeek(sDate Date, int Weeks)
    {
        return IncreaseDateByXDay(Date, 7 * Weeks);
    }

    sDate GetDateByActualVacation(sDate DateFrom, int ActualVacation, bool AreWeekEndFriAndSat = true)
    {

        short NumberOfWeeks = ActualVacation / 5, ThisDayIndex = DayIndex(DateFrom);

        ActualVacation %= 5;

        DateFrom = IncreaseDateByXWeek(DateFrom, NumberOfWeeks);

        while (ActualVacation > 0 || IsWeekEnd(ThisDayIndex, AreWeekEndFriAndSat))
        {
            ActualVacation -= (IsBusinessDay(ThisDayIndex, AreWeekEndFriAndSat)) ? 1 : 0;

            DateFrom = IncreaseDateByXDay(DateFrom, 1);

            ThisDayIndex += (ThisDayIndex == 6) ? -6 : 1;
        }

        return DateFrom;

    }

    void Run()
    {
        sDate DateFrom = ReadDate("Vacation Starts :\n"), DateTo;

        int ActualVacation = MyInput::ReadPositiveNumber((int)0, "\nPlease enter vacation days ? ");

        DateTo = GetDateByActualVacation(DateFrom, ActualVacation);

        PrintDate("\n\nReturn Date : " + GetDayName(DayIndex(DateTo)) + ", ", DateTo, "\n");

    }
}