/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 30, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 4 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace HireOrDriver
{

    short ReadShortNumber(string MessageToUser)
    {
        short ShortNumber;

        cout << MessageToUser;
        cin >> ShortNumber;

        return ShortNumber;
    }

    bool ReadBoolNumber(string MessageToUser)
    {
        bool BoolNumber;

        cout << MessageToUser;
        cin >> BoolNumber;

        return BoolNumber;
    }

    bool CheckIfHiredByAgeAndDriverLecense(short Age, bool HasDriverLecense)
    {
        if (Age > 21 && HasDriverLecense)
        {
            return true;
        }
        return false;
    }


    void Run()
    {
        short Age = ReadShortNumber("Please enter your age ?\n");
        bool HasDriverLecense = ReadBoolNumber("you have Driver License ?\n");

        if (CheckIfHiredByAgeAndDriverLecense(Age, HasDriverLecense))
        {
            cout << endl << "Hired !" << endl;
        }

        else {
            cout << endl << "Regeted !" << endl;
        }

    }
}