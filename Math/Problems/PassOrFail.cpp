/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 30, 2024 (Stored in .txt Archives)
* Extracted & Published : May 27, 2026
* Total Functions       : 3 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace PassOrFail
{
    float ReadFloatNumber(string MessageToUser)
    {
        float floatNumber;

        cout << MessageToUser;
        cin >> floatNumber;

        return floatNumber;
    }

    bool CheckIfMarkGreaterThan50(float Mark)
    {
        if (Mark >= 50)
        {
            return true;
        }
        return false;
    }


    void Run()
    {
        float Mark = ReadFloatNumber("Please enter Mark ?\n");


        if (CheckIfMarkGreaterThan50(Mark))
        {
            cout << endl << "Pass" << endl;
        }

        else {
            cout << endl << "Fail" << endl;
        }

    }
}