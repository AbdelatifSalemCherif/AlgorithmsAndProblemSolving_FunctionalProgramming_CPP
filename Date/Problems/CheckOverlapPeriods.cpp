/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 7, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 8 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";

using namespace std;

namespace CheckOverlapPeriods
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

        return !IsDate1BeforeDate2(Period1.EndDate, Period2.StartDate) &&
            !IsDate1BeforeDate2(Period2.EndDate, Period1.StartDate);
    }

    void Run()
    {
        sPeriod Period1 = ReadPeriod("Enter Period 1"), Period2 = ReadPeriod("\n\nEnter Period 2");

        (IsOverlapPeriods(Period1, Period2)) ? cout << "\n\nYes, Periods Overlap." << endl :
            cout << "\n\nNo, Periods Not Overlap." << endl;

    }
}