/*
==================================================================
* Developer             : Abdelatif SALEM CHERIF
* Teacher               : Dr.Mohammed Abu-Hadhoud
* Educational Platform  : ProgrammingAdvices
* Original Solve Date   : April 30, 2024 (Stored in .txt Archives)
* Extracted & Published : May , 2026
* Total Functions       : 3 Function
==================================================================
*/

#include <iostream>

using namespace std;

namespace GradeA_B_C_D_E_F
{
    float ReadFloatNumber(string MessageToUser)
    {
        float FloatNumber;

        cout << MessageToUser;
        cin >> FloatNumber;

        return FloatNumber;
    }

    char CovertMarkValueToGradeLetter(float Mark)
    {
        if (Mark > 100) { return 'N'; }
        else if (Mark >= 90) { return 'A'; }
        else if (Mark >= 80) { return 'B'; }
        else if (Mark >= 70) { return 'C'; }
        else if (Mark >= 60) { return 'D'; }
        else if (Mark >= 50) { return 'E'; }
        else if (Mark >= 0) { return 'F'; }
        return 'N';

    }

    void Run()
    {
        float Mark = ReadFloatNumber("Please enter Mark ?\n");

        cout << CovertMarkValueToGradeLetter(Mark) << endl;

    }
}