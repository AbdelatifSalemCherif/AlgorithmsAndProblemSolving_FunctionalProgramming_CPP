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

namespace MonthOfYear
{
    enum enMonth {
        enMonthsZero, January, Fibruary, March, April, May, June, July, August, September
        , October, November, December
    };

    enMonth ReadMonth(string MessagToUser)
    {
        int Month;

        cout << MessagToUser;
        cin >> Month;

        return enMonth(Month);
    }

    string CovertMonthToString(enMonth Month)
    {

        switch (Month)
        {
        case enMonth::April:
            return "April";
            break;
        case enMonth::August:
            return "August";
            break;
        case enMonth::December:
            return "December";
            break;
        case enMonth::Fibruary:
            return "Fibruary";
            break;
        case enMonth::January:
            return "January";
            break;
        case enMonth::July:
            return "July";
            break;
        case enMonth::June:
            return "June";
            break;
        case enMonth::March:
            return "March";
            break;
        case enMonth::May:
            return "May";
            break;
        case enMonth::November:
            return "November";
            break;
        case enMonth::October:
            return "October";
            break;
        case enMonth::September:
            return "September";
            break;
        default:
            return "Invalid Month";

        }

    }

    void Run()
    {

        enMonth Month = ReadMonth(
            "Please enter Number of Day : 1=January 2=Fibruary 3=March 4=April 5=May 6=June 7=July 8=August 9-September 10=October 11=November 12=December ?\n");

        cout << "It\'s " << CovertMonthToString(Month);

    }
}