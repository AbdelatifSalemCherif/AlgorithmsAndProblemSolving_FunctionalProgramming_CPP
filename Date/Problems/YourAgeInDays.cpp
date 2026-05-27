/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 6, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 10 Functions
==================================================================
*/

#pragma warning(disable:4996)

#include<iostream>
#include<ctime>

#include"MyInput.h";

using namespace std;

namespace YourAgeInDays
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

    int DayOrderInYear(sDate Date)
    {
        int Sum = 0;

        for (short i = 1; i < Date.Month; i++)
        {
            Sum += NumberOfDaysInMonth(Date.Year, i);
        }

        return Sum + Date.Day;

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

    int CalculateDayesFromTowDates(sDate Date1, sDate Date2, bool IncludingLastDay2 = false)
    {

        if (IsLessDate(Date2, Date1))
        {
            return -1;
        }

        int Sum = DayOrderInYear(Date2) - DayOrderInYear(Date1);

        while (Date1.Year < Date2.Year)
        {
            Sum += NumberOfDaysInYear(Date1.Year++);
        }


        return (IncludingLastDay2) ? ++Sum : Sum;
    }

    sDate GetTodayDate()
    {
        sDate TodayDate;

        time_t t = time(0);

        tm* Time = localtime(&t);

        TodayDate.Year = Time->tm_year + 1900;
        TodayDate.Month = Time->tm_mon + 1;
        TodayDate.Day = Time->tm_mday;

        return TodayDate;
    }

    void PrintDate(string MessageBefore, sDate Date, string MessageAfter)
    {
        cout << MessageBefore << Date.Day << "/" << Date.Month << "/" << Date.Year << MessageAfter;
    }

    void Run()
    {
        sDate BirthDate = ReadDate("Please enter your Date of Birth :\n");

        int DiffrenceBetweenDate1AndDate2 = CalculateDayesFromTowDates(BirthDate, GetTodayDate());

        if (DiffrenceBetweenDate1AndDate2 == -1)
        {
            cout << "\nYou can't birth on futur !" << endl;
        }
        else
        {
            cout << "\nYour age is : " << DiffrenceBetweenDate1AndDate2 << " Day(s)." << endl;
        }

    }
}