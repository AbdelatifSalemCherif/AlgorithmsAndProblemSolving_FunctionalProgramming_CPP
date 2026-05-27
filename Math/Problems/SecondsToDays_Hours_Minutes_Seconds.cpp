/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 28, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 4 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace SecondsToDays_Hours_Minutes_Seconds
{
    unsigned int ReadUsignedIntFromUser(string MessageToUser)
    {
        unsigned int Number;
        cout << MessageToUser << endl;
        cin >> Number;

        return Number;

    }

    void CalculateDaysHoursMinutesSecondes(unsigned int TotalSecondes, unsigned int& Days,
        unsigned int& Hours, unsigned int& Minutes, unsigned int& Secondes)
    {
        unsigned int SecondesIn1Day = 60 * 60 * 12, SecondesIn1Hour = 60 * 60, SecondesIn1Minute = 60, RestOfSecondes;

        Days = TotalSecondes / SecondesIn1Day;
        RestOfSecondes = TotalSecondes % SecondesIn1Day;

        Hours = RestOfSecondes / SecondesIn1Hour;
        RestOfSecondes %= SecondesIn1Hour;

        Minutes = RestOfSecondes / SecondesIn1Minute;
        RestOfSecondes %= SecondesIn1Minute;

        Secondes = RestOfSecondes;

    }

    void PrintDaysHoursMinutesSecondes(unsigned int Days, unsigned int Hours, unsigned int Minutes, unsigned int Secondes)
    {
        cout << "\n" << Days << ":" << Hours << ":" << Minutes << ":" << Secondes << endl;
    }

    void Run()
    {

        unsigned int TotalSecondes = ReadUsignedIntFromUser("Please enter Total Secondes ?"), Days, Hours, Minutes, Secondes;

        CalculateDaysHoursMinutesSecondes(TotalSecondes, Days, Hours, Minutes, Secondes);

        PrintDaysHoursMinutesSecondes(Days, Hours, Minutes, Secondes);

    }
}