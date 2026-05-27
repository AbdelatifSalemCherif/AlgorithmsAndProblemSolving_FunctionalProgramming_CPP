/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 8, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 15 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";
#include"CheckNumbersInRange.h";

using namespace std;

namespace CountOverlapDays
{
    enum enCompare { Before = -1, Equal = 0, After = 1 };

    struct sDate
    {
        short Year;
        short Month;
        short Day;
    };

    struct sPeriod
    {
        sDate StartDate;
        sDate EndDate;
    };

    short NumberOfDaysInMonth(short Year, short Month);

    bool IsValideDate(sDate Date)
    {
        return Date.Year > 0 && CheckNumbersInRange::CheckNumberInRange(Date.Month, (short)1, (short)12)
            && CheckNumbersInRange::CheckNumberInRange(Date.Day, (short)1, (short)NumberOfDaysInMonth(Date.Year, Date.Month));
    }

    sDate ReadDate(string Header = "")
    {
        sDate Date;

        cout << Header;

        Date.Day = MyInput::ReadNumberInRange((short)1, (short)31, "Please enter a Day ? ");
        Date.Month = MyInput::ReadNumberInRange((short)1, (short)12, "Please enter a Month ? ");
        Date.Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year ? ");

        while (!IsValideDate(Date))
        {
            cout << "\a\n\nThis Date Not Exist In Gregorian Calendar !\n" << endl << Header;

            Date.Day = MyInput::ReadNumberInRange((short)1, (short)31, "Please enter a Day ? ");
            Date.Month = MyInput::ReadNumberInRange((short)1, (short)12, "Please enter a Month ? ");
            Date.Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year ? ");
        }

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

    bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
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

    sPeriod ReadPeriod(string Header = "", string MessageStartDate = "\nPlease enter Start Date :\n",
        string MessageEndDate = "\nPlease enter End Date :\n")
    {
        sPeriod Period;

        cout << Header;

        Period.StartDate = ReadDate(MessageStartDate);
        Period.EndDate = ReadDate(MessageEndDate);

        while (IsDate1BeforeDate2(Period.EndDate, Period.StartDate))
        {
            cout << "\a\n\nStart Date cannot be after End Date ! \n\n" << Header;

            Period.StartDate = ReadDate(MessageStartDate);
            Period.EndDate = ReadDate(MessageEndDate);
        }

        return Period;
    }

    void PrintDate(string MessageBefore, sDate Date, string MessageAfter)
    {
        cout << MessageBefore << Date.Day << "/" << Date.Month << "/" << Date.Year << MessageAfter;
    }

    bool IsDate1AfterDate2(sDate Date1, sDate Date2)
    {
        return IsDate1BeforeDate2(Date2, Date1);
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

    int CalculateDiffrenceFromTowDates(sDate Date1, sDate Date2, bool IncludingLastDay2 = false)
    {
        bool IsDate1AfterDate1 = !IsDate1BeforeDate2(Date1, Date2);

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

    void Ordered2Periods(sPeriod& Period1, sPeriod& Period2)
    {
        if (IsDate1AfterDate2(Period1.StartDate, Period2.StartDate))
        {
            sPeriod Temp = Period1;

            Period1 = Period2;
            Period2 = Temp;
        }
    }

    bool IsOverlapPeriods(sPeriod Period1, sPeriod Period2)
    {
        //Ordered2Periods(Period1, Period2);

        return !IsDate1BeforeDate2(Period1.EndDate, Period2.StartDate) && !IsDate1BeforeDate2(Period2.EndDate, Period1.StartDate);
    }

    int CountOverlapDays(sPeriod Period1, sPeriod Period2)
    {
        if (IsOverlapPeriods(Period1, Period2))
        {
            sDate DateFrom = (IsDate1BeforeDate2(Period1.StartDate, Period2.StartDate)) ? Period2.StartDate : Period1.StartDate,
                DateTo = (IsDate1BeforeDate2(Period1.EndDate, Period2.EndDate)) ? Period1.EndDate : Period2.EndDate;

            return CalculateDiffrenceFromTowDates(DateFrom, DateTo);
        }

        return 0;
    }

    void Run()
    {
        sPeriod Period1 = ReadPeriod("Enter Period 1"), Period2 = ReadPeriod("\n\nEnter Period 2");

        cout << "\n\nOverlap Days count is : " << CountOverlapDays(Period1, Period2) << endl;

    }
}