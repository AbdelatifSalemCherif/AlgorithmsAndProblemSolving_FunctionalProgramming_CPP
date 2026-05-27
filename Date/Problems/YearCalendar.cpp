/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 4, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 8 Functions
==================================================================
*/

#include<iostream>

#include"MyOutput.h";

using namespace std;

namespace YearCalendar
{
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

    short DayIndex(short Year, short Month, short Day)
    {
        short a = (14 - Month) / 12, y = Year - a, m = Month + 12 * a - 2;

        return (Day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
    }

    string GetDayName(short ThisDayIndex)
    {
        string DaysName[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

        return DaysName[ThisDayIndex];
    }

    string GetMonthName(short ThisMonthIndex)
    {
        string MonthNames[13] = { "","Jan", "Fib", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dic" };

        return MonthNames[ThisMonthIndex];
    }

    void PrintMonthCalandar(short Year, short Month)
    {
        short FirstDayIndex = DayIndex(Year, Month, 1) + 1, LastDay = NumberOfDaysInMonth(Year, Month);

        cout << endl << endl;

        cout << "-----------------------" << GetMonthName(Month) << "-----------------------" << endl;

        for (short i = 1; i <= 7; i++)
        {
            cout << MyOutput::ManipilatorSpaces(GetDayName(i - 1), 7);
        }
        cout << endl;

        short Counter = 0;

        for (short i = 1; i <= 6; i++)
        {
            for (short j = 1; j <= 7; j++)
            {
                if (i == 1 && FirstDayIndex > j)
                {
                    cout << MyOutput::ManipilatorSpaces(" ", 7);
                }
                else
                {
                    ++Counter;
                    cout << MyOutput::ManipilatorSpaces(to_string(Counter), 7);

                    if (Counter == LastDay)
                    {
                        j = 8;
                        i = 7;
                    }

                }
            }
            cout << endl;
        }

        cout << "-------------------------------------------------" << endl;

    }

    void PrintYearCalendar(short Year)
    {
        cout << "-----------------------------------" << endl;
        cout << "\tCalendar  *  " << Year << endl;
        cout << "-----------------------------------" << endl;


        for (short i = 1; i <= 12; i++)
        {
            PrintMonthCalandar(Year, i);
            cout << endl;
        }
    }

    void Run()
    {
        PrintYearCalendar(2024);

    }
}