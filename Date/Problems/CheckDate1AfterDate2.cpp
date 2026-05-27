/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 7, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 5 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";

using namespace std;

namespace CheckDate1AfterDate2
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

    void PrintDate(string MessageBefore, sDate Date, string MessageAfter)
    {
        cout << MessageBefore << Date.Day << "/" << Date.Month << "/" << Date.Year << MessageAfter;
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

    bool IsDate1AfterDate2(sDate Date1, sDate Date2)
    {
        return IsDate1BeforeDate2(Date2, Date1);
    }

    void Run()
    {
        sDate Date1 = ReadDate("Enter Date 1 :\n"), Date2 = ReadDate("\n\nEnter Date 2 :\n");

        IsDate1AfterDate2(Date1, Date2) ? cout << "\n\nYes, Date 1 is After Date 2." << endl : cout << "\n\nNo, Date 1 is Not After Date 2." << endl;

    }
}