/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : June 3, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 4 Functions
==================================================================
*/

#include<iostream>

#include"MyInput.h";

using namespace std;

namespace GetDayName
{
    short DayIndex(short Year, short Month, short Day)
    {
        short a = (14 - Month) / 12, y = Year - a, m = Month + 12 * a - 2;

        return (Day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
    }

    string GetDayName(short ThisDayIndex)
    {
        string DaysName[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Sutarurday" };

        return DaysName[ThisDayIndex];
    }

    void PrintResults(short Year, short Month, short Day)
    {
        short ThisDayIndex = DayIndex(Year, Month, Day);

        cout << endl;

        cout << "Date      : " << Day << "/" << Month << "/" << Year << endl;

        cout << "Day Order : " << ThisDayIndex << endl;
        cout << "Day Name  : " << GetDayName(ThisDayIndex) << endl;

    }

    void Run()
    {
        short Year = MyInput::ReadPositiveNumber((short)0, "Please enter a year ? "),
            Month = MyInput::ReadNumberInRange((short)1, (short)12, "Please enter a Month ? "),
            Day = MyInput::ReadNumberInRange((short)1, (short)31, "Please enter a Day ? ");

        PrintResults(Year, Month, Day);

    }
}