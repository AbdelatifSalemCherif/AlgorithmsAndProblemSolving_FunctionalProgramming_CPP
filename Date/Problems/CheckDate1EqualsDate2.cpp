/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 5, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 3 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";

using namespace std;

namespace CheckDate1EqualsDate2
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

    bool IsEqualDate(sDate Date1, sDate Date2)
    {
        return (Date1.Year == Date2.Year) && (Date1.Month == Date2.Month) && (Date1.Day == Date2.Day);
    }

    void Run()
    {
        sDate Date1 = ReadDate(), Date2 = ReadDate();

        if (IsEqualDate(Date1, Date2))
        {
            cout << "\nYes, Date1 is Equal to Date2" << endl;
        }
        else
        {
            cout << "\nNo, Date1 is Not equals to Date2" << endl;
        }

    }
}