/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 8, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 7 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";

using namespace std;

namespace IsDateWithinPeriod
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

    sDate ReadDate(string Header = "")
    {
        sDate Date;

        cout << Header;

        Date.Day = MyInput::ReadNumberInRange((short)1, (short)31, "Please enter a Day ? ");
        Date.Month = MyInput::ReadNumberInRange((short)1, (short)12, "Please enter a Month ? ");
        Date.Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year ? ");

        return Date;
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

    bool IsDateWithinPeriod(sPeriod Period, sDate Date)
    {
        return !IsDate1BeforeDate2(Date, Period.StartDate) && !IsDate1AfterDate2(Date, Period.EndDate);
    }

    void Run()
    {
        sPeriod Period = ReadPeriod("Enter Period 1");

        sDate Date = ReadDate("\n\nEnter Date To Check :\n");

        (IsDateWithinPeriod(Period, Date)) ? cout << "\n\nYes, Date within period.\n"
            : cout << "\n\nNo, Date Not within period.\n";

    }
}