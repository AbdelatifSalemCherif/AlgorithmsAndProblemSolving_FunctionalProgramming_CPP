/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : May 1, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 3 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace DayOfWeek
{
    enum enDays { enDaysZero, Sunday, Monday, Tuesday, Wednsday, Thursday, Friday, Saturday };

    enDays ReadDay(string MessagToUser)
    {
        int Day;

        cout << MessagToUser;
        cin >> Day;

        return enDays(Day);
    }

    string CovertDaysToString(enDays Day)
    {

        switch (Day)
        {
        case enDays::Saturday:
            return "Saturday";
            break;
        case enDays::Friday:
            return "Friday";
            break;
        case enDays::Monday:
            return "Monday";
            break;
        case enDays::Sunday:
            return "Sunday";
            break;
        case enDays::Thursday:
            return "Thursday";
            break;
        case enDays::Tuesday:
            return "Tuesday";
            break;
        case enDays::Wednsday:
            return "Wednsday";
            break;
        default:
            return "Invalid Day";
        }

    }

    void Run()
    {

        enDays Day = ReadDay("Please enter Number of Day : 1=Sanday 2=Monday 3=Tuesday 4=Wednesday 5=Thursday 6=Friday 7=Saturday ?\n");

        cout << "It\'s " << CovertDaysToString(Day);

    }
}